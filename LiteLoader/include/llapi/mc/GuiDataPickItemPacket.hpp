/**
 * @file  GuiDataPickItemPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GuiDataPickItemPacket.
 *
 */
class GuiDataPickItemPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUIDATAPICKITEMPACKET
public:
    class GuiDataPickItemPacket& operator=(class GuiDataPickItemPacket const &) = delete;
    GuiDataPickItemPacket(class GuiDataPickItemPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@GuiDataPickItemPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@GuiDataPickItemPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@GuiDataPickItemPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@GuiDataPickItemPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUIDATAPICKITEMPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GuiDataPickItemPacket();
#endif
    /**
     * @symbol ??0GuiDataPickItemPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBH\@Z
     */
    MCAPI GuiDataPickItemPacket(std::string const &, std::string const &, int const &);
    /**
     * @symbol ??0GuiDataPickItemPacket\@\@QEAA\@XZ
     */
    MCAPI GuiDataPickItemPacket();

};
