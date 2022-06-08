// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCK
public:
    class CommandBlock& operator=(class CommandBlock const &) = delete;
    CommandBlock(class CommandBlock const &) = delete;
    CommandBlock() = delete;
#endif


public:
    /*0*/ virtual ~CommandBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*70*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*72*/ virtual void __unk_vfn_72();
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*204*/ virtual void __unk_vfn_204();
    /*205*/ virtual void __unk_vfn_205();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCK
public:
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI CommandBlock(std::string const &, int, enum CommandBlockMode);
    MCAPI enum CommandBlockMode getMode() const;
    MCAPI void updateBlock(class BlockSource &, class BlockPos const &, enum CommandBlockMode, bool) const;
    MCAPI static int mCBModeMap[];

//private:
    MCAPI void _execute(class BlockSource &, class CommandBlockActor &, class BlockPos const &, bool) const;
    MCAPI void _executeChain(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _executeChainBlock(class BlockSource &, class BlockPos const &, class CommandBlockActor &, bool) const;
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;

private:


};