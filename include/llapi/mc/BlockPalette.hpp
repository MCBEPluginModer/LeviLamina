/**
 * @file  BlockPalette.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPalette.
 *
 */
class BlockPalette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPALETTE
public:
    class BlockPalette& operator=(class BlockPalette const &) = delete;
    BlockPalette(class BlockPalette const &) = delete;
    BlockPalette() = delete;
#endif

public:
    /**
     * @symbol ??0BlockPalette@@QEAA@UConstructorToken@0@@Z
     * @hash   1910809381
     */
    MCAPI BlockPalette(struct BlockPalette::ConstructorToken);
    /**
     * @symbol ??0BlockPalette@@QEAA@AEAVLevel@@@Z
     * @hash   -2003332121
     */
    MCAPI BlockPalette(class Level &);
    /**
     * @symbol ?cacheBlockComponentData@BlockPalette@@QEAAXXZ
     * @hash   -458593517
     */
    MCAPI void cacheBlockComponentData();
    /**
     * @symbol ?convertLegacyBlock@BlockPalette@@QEBAAEBVBlock@@UBlockID@@G@Z
     * @hash   -709443101
     */
    MCAPI class Block const & convertLegacyBlock(struct BlockID, unsigned short) const;
    /**
     * @symbol ?convertLegacyBlocks@BlockPalette@@QEBA_NV?$buffer_span_mut@PEBVBlock@@@@V?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@_K@Z
     * @hash   -488982004
     */
    MCAPI bool convertLegacyBlocks(class buffer_span_mut<class Block const *>, class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>, unsigned __int64) const;
    /**
     * @symbol ?getBlock@BlockPalette@@QEBAAEBVBlock@@AEBI@Z
     * @hash   -1149015016
     */
    MCAPI class Block const & getBlock(unsigned int const &) const;
    /**
     * @symbol ?getBlock@BlockPalette@@QEBAAEBVBlock@@AEBVCompoundTag@@@Z
     * @hash   173961117
     */
    MCAPI class Block const & getBlock(class CompoundTag const &) const;
    /**
     * @symbol ?getBlockFromLegacyData@BlockPalette@@QEBAAEBVBlock@@UNewBlockID@@I@Z
     * @hash   -558922458
     */
    MCAPI class Block const & getBlockFromLegacyData(struct NewBlockID, unsigned int) const;
    /**
     * @symbol ?getBlockLegacy@BlockPalette@@QEBAPEBVBlockLegacy@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   226196876
     */
    MCAPI class BlockLegacy const * getBlockLegacy(std::string const &) const;
    /**
     * @symbol ?initFromBlockDefinitions@BlockPalette@@QEAAXXZ
     * @hash   785039269
     */
    MCAPI void initFromBlockDefinitions();
    /**
     * @symbol ?switchBlock@BlockPalette@@QEBAAEBVBlock@@AEBV2@AEBVBlockLegacy@@@Z
     * @hash   -941170999
     */
    MCAPI class Block const & switchBlock(class Block const &, class BlockLegacy const &) const;
    /**
     * @symbol ??1BlockPalette@@QEAA@XZ
     * @hash   -1763255720
     */
    MCAPI ~BlockPalette();

//private:
    /**
     * @symbol ?shouldWarnFor@BlockPalette@@AEBA_NUNewBlockID@@G@Z
     * @hash   -439882068
     */
    MCAPI bool shouldWarnFor(struct NewBlockID, unsigned short) const;

private:

};