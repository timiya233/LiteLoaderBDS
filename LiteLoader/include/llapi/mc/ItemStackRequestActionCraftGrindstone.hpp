/**
 * @file  ItemStackRequestActionCraftGrindstone.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftGrindstone.
 *
 */
class ItemStackRequestActionCraftGrindstone {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
public:
    class ItemStackRequestActionCraftGrindstone& operator=(class ItemStackRequestActionCraftGrindstone const &) = delete;
    ItemStackRequestActionCraftGrindstone(class ItemStackRequestActionCraftGrindstone const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackRequestActionCraftGrindstone();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -344222660
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionCraftGrindstone@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   2058036564
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionCraftGrindstone@@UEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -101926823
     * @vftbl  6
     * @symbol ?getRecipeNetId@ItemStackRequestActionCraftGrindstone@@UEBAAEBUItemStackNetIdVariant@@XZ
     */
    virtual struct ItemStackNetIdVariant const & getRecipeNetId() const;
    /**
     * @hash   -809978099
     * @symbol ??0ItemStackRequestActionCraftGrindstone@@QEAA@XZ
     */
    MCAPI ItemStackRequestActionCraftGrindstone();
    /**
     * @hash   -475197144
     * @symbol ?getRepairCost@ItemStackRequestActionCraftGrindstone@@QEBAHXZ
     */
    MCAPI int getRepairCost() const;

};