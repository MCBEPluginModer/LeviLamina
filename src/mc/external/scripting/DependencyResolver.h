#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/DependencyResolutionBehavior.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
    // prevent constructor by default
    DependencyResolver& operator=(DependencyResolver const&);
    DependencyResolver(DependencyResolver const&);
    DependencyResolver();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0DependencyResolver@Scripting@@QEAA@AEBV?$vector@V?$unique_ptr@VIModuleBindingFactory@Scripting@@U?$default_delete@VIModuleBindingFactory@Scripting@@@std@@@std@@V?$allocator@V?$unique_ptr@VIModuleBindingFactory@Scripting@@U?$default_delete@VIModuleBindingFactory@Scripting@@@std@@@std@@@2@@std@@W4DependencyResolutionBehavior@1@@Z
    MCAPI DependencyResolver(
        std::vector<std::unique_ptr<class Scripting::IModuleBindingFactory>> const&,
        ::Scripting::DependencyResolutionBehavior
    );

    // symbol:
    // ?resolve@DependencyResolver@Scripting@@QEAA?AUModuleResolveResult@2@AEBUModuleDescriptor@2@AEBV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@@Z
    MCAPI struct Scripting::ModuleResolveResult resolve(
        struct Scripting::ModuleDescriptor const&,
        std::vector<struct Scripting::ModuleDescriptor> const& dependencies
    );

    // symbol: ??1DependencyResolver@Scripting@@QEAA@XZ
    MCAPI ~DependencyResolver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildVersionRequestTable@DependencyResolver@Scripting@@AEBA?AV?$unordered_map@UVersionRequestKey@Scripting@@V?$vector@UVersionRequestedBy@Scripting@@V?$allocator@UVersionRequestedBy@Scripting@@@std@@@std@@U?$hash@UVersionRequestKey@Scripting@@@4@U?$equal_to@UVersionRequestKey@Scripting@@@4@V?$allocator@U?$pair@$$CBUVersionRequestKey@Scripting@@V?$vector@UVersionRequestedBy@Scripting@@V?$allocator@UVersionRequestedBy@Scripting@@@std@@@std@@@std@@@4@@std@@AEBUModuleDescriptor@2@AEBV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@4@@Z
    MCAPI std::unordered_map<struct Scripting::VersionRequestKey, std::vector<struct Scripting::VersionRequestedBy>>
          _buildVersionRequestTable(
              struct Scripting::ModuleDescriptor const&,
              std::vector<struct Scripting::ModuleDescriptor> const& dependencies
          ) const;

    // symbol: ?_getModuleBindingFactory@DependencyResolver@Scripting@@AEBAPEAVIModuleBindingFactory@2@AEBUUUID@2@@Z
    MCAPI class Scripting::IModuleBindingFactory* _getModuleBindingFactory(struct Scripting::UUID const& uuid) const;

    // symbol: ?_isVersionMissing@DependencyResolver@Scripting@@AEBA_NAEBVIModuleBindingFactory@2@AEBUVersion@2@@Z
    MCAPI bool _isVersionMissing(class Scripting::IModuleBindingFactory const&, struct Scripting::Version const&) const;

    // symbol: ?_isVersionSupported@DependencyResolver@Scripting@@AEBA_NAEBVIModuleBindingFactory@2@AEBUVersion@2@@Z
    MCAPI bool
    _isVersionSupported(class Scripting::IModuleBindingFactory const&, struct Scripting::Version const&) const;

    // symbol:
    // ?_orderModulesByDependency@DependencyResolver@Scripting@@AEBA?AV?$vector@USupportedBindingModule@Scripting@@V?$allocator@USupportedBindingModule@Scripting@@@std@@@std@@$$QEAV34@@Z
    MCAPI std::vector<struct Scripting::SupportedBindingModule>
          _orderModulesByDependency(std::vector<struct Scripting::SupportedBindingModule>&&) const;

    // symbol:
    // ?_resolveDependencyRequests@DependencyResolver@Scripting@@AEBA?AUModuleResolveResult@2@AEBV?$unordered_map@UVersionRequestKey@Scripting@@V?$vector@UVersionRequestedBy@Scripting@@V?$allocator@UVersionRequestedBy@Scripting@@@std@@@std@@U?$hash@UVersionRequestKey@Scripting@@@4@U?$equal_to@UVersionRequestKey@Scripting@@@4@V?$allocator@U?$pair@$$CBUVersionRequestKey@Scripting@@V?$vector@UVersionRequestedBy@Scripting@@V?$allocator@UVersionRequestedBy@Scripting@@@std@@@std@@@std@@@4@@std@@@Z
    MCAPI struct Scripting::ModuleResolveResult
    _resolveDependencyRequests(std::unordered_map<
                               struct Scripting::VersionRequestKey,
                               std::vector<struct Scripting::VersionRequestedBy>> const&) const;

    // NOLINTEND
};

}; // namespace Scripting
