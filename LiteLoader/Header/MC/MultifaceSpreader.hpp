// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MultifaceSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACESPREADER
public:
    class MultifaceSpreader& operator=(class MultifaceSpreader const &) = delete;
    MultifaceSpreader(class MultifaceSpreader const &) = delete;
    MultifaceSpreader() = delete;
#endif

public:
    /*0*/ virtual std::vector<enum MultifaceSpreader::SpreadType> const & _getSpreadTypes() const;
    /*1*/ virtual bool _canSpreadFrom(class Block const &, unsigned char) const;
    /*2*/ virtual bool _canSpreadInto(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /*3*/ virtual bool _isOtherBlockValidAsSource(class Block const &) const;
    MCAPI class std::optional<struct std::pair<class BlockPos const, unsigned char const>> getSpreadFromFaceTowardDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    MCAPI int spreadFromAllFacesTowardAllDirections(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;
    MCAPI bool spreadFromFaceTowardDirection(class BlockSource &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    MCAPI bool spreadFromFaceTowardDirectionWorldGen(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    MCAPI bool spreadFromFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char) const;
    MCAPI bool spreadFromRandomFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;

protected:
    MCAPI bool _canSpreadToFace(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    MCAPI static std::vector<enum MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES;

private:

};