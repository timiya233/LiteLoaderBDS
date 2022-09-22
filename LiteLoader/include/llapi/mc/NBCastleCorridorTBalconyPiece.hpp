/**
 * @file  NBCastleCorridorTBalconyPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBCastleCorridorTBalconyPiece.
 *
 */
class NBCastleCorridorTBalconyPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLECORRIDORTBALCONYPIECE
public:
    class NBCastleCorridorTBalconyPiece& operator=(class NBCastleCorridorTBalconyPiece const &) = delete;
    NBCastleCorridorTBalconyPiece(class NBCastleCorridorTBalconyPiece const &) = delete;
    NBCastleCorridorTBalconyPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBCastleCorridorTBalconyPiece();
    /**
     * @hash   -1306616413
     * @vftbl  2
     * @symbol ?getType@NBCastleCorridorTBalconyPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -631494483
     * @vftbl  3
     * @symbol ?addChildren@NBCastleCorridorTBalconyPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1392262011
     * @vftbl  4
     * @symbol ?postProcess@NBCastleCorridorTBalconyPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};