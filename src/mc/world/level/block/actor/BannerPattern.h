#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    BannerPattern& operator=(BannerPattern const&);
    BannerPattern(BannerPattern const&);
    BannerPattern();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BannerPattern@@UEAA@XZ
    virtual ~BannerPattern() = default;

    // symbol:
    // ??0BannerPattern@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0VItemStack@@F_N@Z
    MCAPI BannerPattern(
        std::string const& name,
        std::string const& nameID,
        class ItemStack    item,
        short              patternItemType,
        bool               ignoreAux
    );

    // symbol: ?getIgnoreAux@BannerPattern@@QEBA_NXZ
    MCAPI bool getIgnoreAux() const;

    // symbol: ?getIngredientItem@BannerPattern@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getIngredientItem() const;

    // symbol: ?getName@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getNameID@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNameID() const;

    // symbol:
    // ?getPattern@BannerPattern@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getPattern() const;

    // symbol: ?hasPattern@BannerPattern@@QEBA_NXZ
    MCAPI bool hasPattern() const;

    // symbol: ?matchesPatternItem@BannerPattern@@QEBA_NAEBVItemStackBase@@@Z
    MCAPI bool matchesPatternItem(class ItemStackBase const& item) const;

    // symbol: ?requiresIngredientItem@BannerPattern@@QEBA_NXZ
    MCAPI bool requiresIngredientItem() const;

    // symbol: ?requiresPatternItem@BannerPattern@@QEBA_NXZ
    MCAPI bool requiresPatternItem() const;

    // symbol:
    // ?findPatternIndexByNameID@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<uchar> findPatternIndexByNameID(std::string const& nameID);

    // symbol:
    // ?getPatternIndexFromName@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<uchar> getPatternIndexFromName(std::string const& name);

    // symbol:
    // ?getPatternIndexFromNameID@BannerPattern@@SAEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static uchar getPatternIndexFromNameID(std::string const& nameID);

    // symbol: ?initPatterns@BannerPattern@@SAXXZ
    MCAPI static void initPatterns();

    // symbol: ?tryGetPatternDataFromTag@BannerPattern@@SAPEBVCompoundTag@@PEBVTag@@@Z
    MCAPI static class CompoundTag const* tryGetPatternDataFromTag(class Tag const* tag);

    // symbol: ?mBase@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mBase;

    // symbol: ?mBorder@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mBorder;

    // symbol: ?mBricks@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mBricks;

    // symbol: ?mCircle@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mCircle;

    // symbol: ?mCreeper@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mCreeper;

    // symbol: ?mCross@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mCross;

    // symbol: ?mCurlyBorder@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mCurlyBorder;

    // symbol: ?mDiagonalLeft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mDiagonalLeft;

    // symbol: ?mDiagonalRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mDiagonalRight;

    // symbol: ?mDiagonalUpLeft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mDiagonalUpLeft;

    // symbol: ?mDiagonalUpRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mDiagonalUpRight;

    // symbol: ?mFlower@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mFlower;

    // symbol: ?mGlobe@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mGlobe;

    // symbol: ?mGradient@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mGradient;

    // symbol: ?mGradientUp@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mGradientUp;

    // symbol: ?mHalfHorizontal@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mHalfHorizontal;

    // symbol: ?mHalfHorizontalBottom@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mHalfHorizontalBottom;

    // symbol: ?mHalfVertical@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mHalfVertical;

    // symbol: ?mHalfVerticalRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mHalfVerticalRight;

    // symbol: ?mIllager@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mIllager;

    // symbol: ?mMojang@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mMojang;

    // symbol:
    // ?mPatterns@BannerPattern@@2V?$vector@V?$unique_ptr@VBannerPattern@@U?$default_delete@VBannerPattern@@@std@@@std@@V?$allocator@V?$unique_ptr@VBannerPattern@@U?$default_delete@VBannerPattern@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class BannerPattern>> mPatterns;

    // symbol: ?mPiglin@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mPiglin;

    // symbol: ?mRhombus@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mRhombus;

    // symbol: ?mSkull@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSkull;

    // symbol: ?mSmallStripes@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSmallStripes;

    // symbol: ?mSquareBottomLeft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSquareBottomLeft;

    // symbol: ?mSquareBottomRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSquareBottomRight;

    // symbol: ?mSquareTopLeft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSquareTopLeft;

    // symbol: ?mSquareTopRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mSquareTopRight;

    // symbol: ?mStraightCross@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStraightCross;

    // symbol: ?mStripeBottom@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeBottom;

    // symbol: ?mStripeCenter@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeCenter;

    // symbol: ?mStripeDownleft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeDownleft;

    // symbol: ?mStripeDownright@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeDownright;

    // symbol: ?mStripeLeft@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeLeft;

    // symbol: ?mStripeMiddle@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeMiddle;

    // symbol: ?mStripeRight@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeRight;

    // symbol: ?mStripeTop@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mStripeTop;

    // symbol: ?mTriangleBottom@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mTriangleBottom;

    // symbol: ?mTriangleTop@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mTriangleTop;

    // symbol: ?mTrianglesBottom@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mTrianglesBottom;

    // symbol: ?mTrianglesTop@BannerPattern@@2PEAV1@EA
    MCAPI static class BannerPattern* mTrianglesTop;

    // NOLINTEND
};
