#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/api/utils/Random.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

using namespace ll::schedule;

#include "ll/api/Literals.h"

ll::Logger schedulelogger("Schedule");

SystemTimeScheduler s;
GameTickScheduler   s2;
GameTimeScheduler   s3;

LL_AUTO_TYPED_INSTANCE_HOOK(
    SchedulerTestHook,
    HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {

    s.add<RepeatTask>(100_tick, [&] {
        schedulelogger.info(
            "hi, 100_tick life {} ramdom {}",
            ll::chrono::GameTimeClock::now().time_since_epoch(),
            ll::utils::random::rand<uint>()
        );
    });

    s2.add<DelayTask>(1_tick, [&] {
        schedulelogger.info("try GameTime {}", ll::chrono::GameTimeClock::now().time_since_epoch());
        s3.add<RepeatTask>(5s, [&] {
            schedulelogger.info(
                "hi, 5s       gt   {} ramdom {}",
                ll::chrono::GameTimeClock::now().time_since_epoch(),
                ll::utils::random::rand<double>()
            );
        });
    });

    s2.add<RepeatTask>(0.1min, [&] {
        std::lock_guard lock(ll::Logger::loggerMutex);
        schedulelogger.info(
            "hi, 0.1min   game {} ramdom {}",
            ll::chrono::GameTimeClock::now().time_since_epoch(),
            ll::utils::random::rand<int64>()
        );
        auto ramdom  = ll::utils::random::rand<int64>();
        ramdom      /= 0;
        schedulelogger.info("{}", ramdom);
        throw std::runtime_error("I'm a error from schedule Task!");
    });

    return origin(ins);
}