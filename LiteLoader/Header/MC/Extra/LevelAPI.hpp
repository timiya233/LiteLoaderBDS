#ifdef EXTRA_INCLUDE_PART_LEVEL
// Add include headers & pre-declares
class Actor;
class ActorDamageSource;
class ItemStack;
class ItemActor;
class Block;
class Tag;
class Player;
class BlockSource;
class BlockPalette;
class Dimension;

#else
// Add new members to class
public:
    //Entity & Player
    LIAPI static Actor* fetchEntity(struct ActorUniqueID a0, bool a1);
    LIAPI static void forEachPlayer(class std::function<bool(class Player&)> a0);
    LIAPI static void forEachPlayer(class std::function<bool(class Player const&)> a0);
    LIAPI static std::vector<Player*> getAllPlayers();
    LIAPI static Player* getPlayer(const string& info);     //name or xuid

    //Block
    LIAPI static bool setBlock(Vec3& pos, int dim, Block* block);
    LIAPI static bool setBlock(Vec3& pos, int dim, const string& name, unsigned short tileData);
    LIAPI static bool setBlock(Vec3& pos, int dim, Tag* nbt);
    LIAPI static bool breakNaturally(BlockSource* bs, BlockPos& pos);
    LIAPI static bool breakNaturally(BlockSource* bs, BlockPos& pos, ItemStack* item);
    LIAPI static bool destroyBlock(class BlockSource& bs, class BlockPos const& pos, bool a2);
    LIAPI static void spawnParticleEffect(std::string const& type, class Vec3 const& pos, class Dimension* a2);
    LIAPI static void spawnParticleEffect(std::string const& type, class Actor const& a1, class Vec3 const& a2);

    //Item
    LIAPI static ItemStack* getItemStackFromId(short a2 = 0, int a3 = 0);

    //Helper
    LIAPI static BlockSource* getBlockSource(int dimid);
    LIAPI static BlockSource* getBlockSource(Actor* actor);
    LIAPI static BlockPalette* getBlockPalette();
    LIAPI static Dimension* getDimension(class AutomaticID<class Dimension, int> a0);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
    LIAPI static void broadcastText(string a1, TextType ty);

 public:
    static void dummy() { ; }
    struct ServerCommandOrigin {
        void* myVTBL;
        void* UUID[2];
        ServerLevel* lvl;
        string Name;
        unsigned char Perm;
        static void* fake_vtbl[26];

        ServerCommandOrigin()
        {
            if (fake_vtbl[1] == nullptr) {
                memcpy(fake_vtbl, (void**)(SYM("??_7ServerCommandOrigin@@6B@")) - 1, sizeof(fake_vtbl));
                fake_vtbl[1] = (void*)dummy;
            }
            myVTBL = fake_vtbl + 1;
            Name = "Server";
            Perm = 5;
            lvl = Global<ServerLevel>;
        }
    };

    LIAPI static bool runcmdAs(Player* pl, const string& cmd);
    LIAPI static std::pair<bool, string> runcmdEx(const string& cmd);
    LIAPI static bool runcmd(const string& cmd);
    /*
* Wrappers for Muti-Vftable Class
inline void _checkUserStorage() {
        void (Level::*rv)();
        *((void**)&rv) = dlsym("?_checkUserStorage@Level@@UEAAXXZ");
        return (this->*rv)();
    }

    inline class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId a0) {
        class StackRefResultT<struct EntityRefTraits> (Level::*rv)(class EntityNetId);
        *((void**)&rv) = dlsym("?_clientHandleAddOwnedEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@@Z");
        return (this->*rv)(std::forward<class EntityNetId>(a0));
    }

    inline class StackRefResultT<struct EntityRefTraits>
        _clientHandleAddWeakRefEntity(class EntityNetId a0, class WeakRefT<struct EntityRefTraits> const& a1) {
        class StackRefResultT<struct EntityRefTraits> (Level::*rv)(class EntityNetId, class WeakRefT<struct EntityRefTraits> const&);
        *((void**)&rv) = dlsym("?_clientHandleAddWeakRefEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@AEBV?$WeakRefT@UEntityRefTraits@@@@@Z");
        return (this->*rv)(std::forward<class EntityNetId>(a0), std::forward<class WeakRefT<struct EntityRefTraits> const&>(a1));
    }

    inline void
        _clientHandleRemoveOwnedEntity(class EntityNetId a0) {
        void (Level::*rv)(class EntityNetId);
        *((void**)&rv) = dlsym("?_clientHandleRemoveOwnedEntity@Level@@UEAAXVEntityNetId@@@Z");
        return (this->*rv)(std::forward<class EntityNetId>(a0));
    }

    inline void _clientHandleRemoveWeakRefEntity(class EntityNetId a0) {
        void (Level::*rv)(class EntityNetId);
        *((void**)&rv) = dlsym("?_clientHandleRemoveWeakRefEntity@Level@@UEAAXVEntityNetId@@@Z");
        return (this->*rv)(std::forward<class EntityNetId>(a0));
    }

    inline void _destroyEffect(class BlockPos const& a0, class Block const& a1, int a2) {
        void (Level::*rv)(class BlockPos const&, class Block const&, int);
        *((void**)&rv) = dlsym("?_destroyEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }

    inline class Actor* addAutonomousEntity(class BlockSource& a0, class OwnerPtrT<struct EntityRefTraits> a1) {
        class Actor* (Level::*rv)(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);
        *((void**)&rv) = dlsym("?addAutonomousEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class OwnerPtrT<struct EntityRefTraits>>(a1));
    }

    inline void addBossEventListener(class BossEventListener* a0) {
        void (Level::*rv)(class BossEventListener*);
        *((void**)&rv) = dlsym("?addBossEventListener@Level@@UEAAXPEAVBossEventListener@@@Z");
        return (this->*rv)(std::forward<class BossEventListener*>(a0));
    }

    inline void addBreakingItemParticleEffect(class Vec3 const& a0, int /*enum ParticleType/ a1, struct TextureUVCoordinateSet const& a2, bool a3) {
    void (Level::*rv)(class Vec3 const&, int /*enum ParticleType/, struct TextureUVCoordinateSet const&, bool);
    *((void**)&rv) = dlsym("?addBreakingItemParticleEffect@Level@@UEAAXAEBVVec3@@W4ParticleType@@AEBUTextureUVCoordinateSet@@_N@Z");
    return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<int /*enum ParticleType/>(a1), std::forward<struct TextureUVCoordinateSet const&>(a2), std::forward<bool>(a3));
}

inline void addChunkViewTracker(class std::weak_ptr<class ChunkViewSource> a0) {
    void (Level::*rv)(class std::weak_ptr<class ChunkViewSource>);
    *((void**)&rv) = dlsym("?addChunkViewTracker@Level@@UEAAXV?$weak_ptr@VChunkViewSource@@@std@@@Z");
    return (this->*rv)(std::forward<class std::weak_ptr<class ChunkViewSource>>(a0));
}

inline class Actor* addDisplayEntity(class BlockSource& a0, class OwnerPtrT<struct EntityRefTraits> a1) {
    class Actor* (Level::*rv)(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);
    *((void**)&rv) = dlsym("?addDisplayEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class OwnerPtrT<struct EntityRefTraits>>(a1));
}

inline class Actor* addEntity(class BlockSource& a0, class OwnerPtrT<struct EntityRefTraits> a1) {
    class Actor* (Level::*rv)(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);
    *((void**)&rv) = dlsym("?addEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class OwnerPtrT<struct EntityRefTraits>>(a1));
}

inline void addEntriesToTagCache(std::vector<std::string> a0) {
    void (Level::*rv)(std::vector<std::string>);
    *((void**)&rv) = dlsym("?addEntriesToTagCache@Level@@UEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    return (this->*rv)(std::forward<std::vector<std::string>>(a0));
}

inline void addEntryToTagCache(std::string const& a0) {
    void (Level::*rv)(std::string const&);
    *((void**)&rv) = dlsym("?addEntryToTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class Actor* addGlobalEntity(class BlockSource& a0, class OwnerPtrT<struct EntityRefTraits> a1) {
    class Actor* (Level::*rv)(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);
    *((void**)&rv) = dlsym("?addGlobalEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class OwnerPtrT<struct EntityRefTraits>>(a1));
}

inline void addListener(class LevelListener& a0) {
    void (Level::*rv)(class LevelListener&);
    *((void**)&rv) = dlsym("?addListener@Level@@UEAAXAEAVLevelListener@@@Z");
    return (this->*rv)(std::forward<class LevelListener&>(a0));
}

inline class Particle* addParticle(int /*enum ParticleType/ a0, class Vec3 const& a1, class Vec3 const& a2, int a3, class CompoundTag const* a4, bool a5) {
    class Particle* (Level::*rv)(int /*enum ParticleType/, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
    *((void**)&rv) = dlsym("?addParticle@Level@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z");
    return (this->*rv)(std::forward<int /*enum ParticleType/>(a0), std::forward<class Vec3 const&>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3), std::forward<class CompoundTag const*>(a4), std::forward<bool>(a5));
}

inline void addParticleEffect(class HashedString const& a0, class Vec3 const& a1, class MolangVariableMap const& a2) {
    void (Level::*rv)(class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    *((void**)&rv) = dlsym("?addParticleEffect@Level@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z");
    return (this->*rv)(std::forward<class HashedString const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<class MolangVariableMap const&>(a2));
}

inline void addParticleEffect(class HashedString const& a0, class Actor const& a1, class HashedString const& a2, class Vec3 const& a3, class MolangVariableMap const& a4) {
    void (Level::*rv)(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    *((void**)&rv) = dlsym("?addParticleEffect@Level@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z");
    return (this->*rv)(std::forward<class HashedString const&>(a0), std::forward<class Actor const&>(a1), std::forward<class HashedString const&>(a2), std::forward<class Vec3 const&>(a3), std::forward<class MolangVariableMap const&>(a4));
}

inline void addTerrainParticleEffect(class BlockPos const& a0, class Block const& a1, class Vec3 const& a2, float a3, float a4, float a5) {
    void (Level::*rv)(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    *((void**)&rv) = dlsym("?addTerrainParticleEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z");
    return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1), std::forward<class Vec3 const&>(a2), std::forward<float>(a3), std::forward<float>(a4), std::forward<float>(a5));
}

inline void addTerrainSlideEffect(class BlockPos const& a0, class Block const& a1, class Vec3 const& a2, float a3, float a4, float a5) {
    void (Level::*rv)(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    *((void**)&rv) = dlsym("?addTerrainSlideEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z");
    return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1), std::forward<class Vec3 const&>(a2), std::forward<float>(a3), std::forward<float>(a4), std::forward<float>(a5));
}

inline void addUser(class OwnerPtrT<struct EntityRefTraits> a0) {
    void (Level::*rv)(class OwnerPtrT<struct EntityRefTraits>);
    *((void**)&rv) = dlsym("?addUser@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z");
    return (this->*rv)(std::forward<class OwnerPtrT<struct EntityRefTraits>>(a0));
}

inline void animateTick(class Actor& a0) {
    void (Level::*rv)(class Actor&);
    *((void**)&rv) = dlsym("?animateTick@Level@@UEAAXAEAVActor@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0));
}

inline void applyLiquidPhysicsToActor(class Actor* a0, int /*enum MaterialType/ a1) {
    void (Level::*rv)(class Actor*, int /*enum MaterialType/);
    *((void**)&rv) = dlsym("?applyLiquidPhysicsToActor@Level@@UEAAXPEAVActor@@W4MaterialType@@@Z");
    return (this->*rv)(std::forward<class Actor*>(a0), std::forward<int /*enum MaterialType/>(a1));
}

inline bool areBossEventListenersReady() {
    bool (Level::*rv)();
    *((void**)&rv) = dlsym("?areBossEventListenersReady@Level@@UEAA_NXZ");
    return (this->*rv)();
}

inline class Level* asLevel() {
    class Level* (Level::*rv)();
    *((void**)&rv) = dlsym("?asLevel@Level@@UEAAPEAV1@XZ");
    return (this->*rv)();
}

inline void broadcastActorEvent(class Actor& a0, int /*enum ActorEvent/ a1, int a2) {
    void (Level::*rv)(class Actor&, int /*enum ActorEvent/, int);
    *((void**)&rv) = dlsym("?broadcastActorEvent@Level@@UEAAXAEAVActor@@W4ActorEvent@@H@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<int /*enum ActorEvent/>(a1), std::forward<int>(a2));
}

inline void broadcastBossEvent(int /*enum BossEventUpdateType/ a0) {
    void (Level::*rv)(int /*enum BossEventUpdateType/);
    *((void**)&rv) = dlsym("?broadcastBossEvent@Level@@UEAAXW4BossEventUpdateType@@@Z");
    return (this->*rv)(std::forward<int /*enum BossEventUpdateType/>(a0));
}

inline void broadcastBossEvent(int /*enum BossEventUpdateType/ a0, struct ActorUniqueID const& a1, class BossEventPacket const& a2) {
    void (Level::*rv)(int /*enum BossEventUpdateType/, struct ActorUniqueID const&, class BossEventPacket const&);
    *((void**)&rv) = dlsym("?broadcastBossEvent@Level@@UEAAXW4BossEventUpdateType@@AEBUActorUniqueID@@AEBVBossEventPacket@@@Z");
    return (this->*rv)(std::forward<int /*enum BossEventUpdateType/>(a0), std::forward<struct ActorUniqueID const&>(a1), std::forward<class BossEventPacket const&>(a2));
}

inline void broadcastLevelEvent(int /*enum LevelEvent/ a0, class Vec3 const& a1, int a2, class UserEntityIdentifierComponent const* a3) {
    void (Level::*rv)(int /*enum LevelEvent/, class Vec3 const&, int, class UserEntityIdentifierComponent const*);
    *((void**)&rv) = dlsym("?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z");
    return (this->*rv)(std::forward<int /*enum LevelEvent/>(a0), std::forward<class Vec3 const&>(a1), std::forward<int>(a2), std::forward<class UserEntityIdentifierComponent const*>(a3));
}

inline void broadcastLevelEvent(int /*enum LevelEvent/ a0, class CompoundTag const& a1, class UserEntityIdentifierComponent const* a2) {
    void (Level::*rv)(int /*enum LevelEvent/, class CompoundTag const&, class UserEntityIdentifierComponent const*);
    *((void**)&rv) = dlsym("?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@PEBVUserEntityIdentifierComponent@@@Z");
    return (this->*rv)(std::forward<int /*enum LevelEvent/>(a0), std::forward<class CompoundTag const&>(a1), std::forward<class UserEntityIdentifierComponent const*>(a2));
}

inline void broadcastLocalEvent(class BlockSource& a0, int /*enum LevelEvent/ a1, class Vec3 const& a2, int a3) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelEvent/, class Vec3 const&, int);
    *((void**)&rv) = dlsym("?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@H@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3));
}

inline void broadcastLocalEvent(class BlockSource& a0, int /*enum LevelEvent/ a1, class Vec3 const& a2, class Block const& a3) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelEvent/, class Vec3 const&, class Block const&);
    *((void**)&rv) = dlsym("?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@AEBVBlock@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<class Block const&>(a3));
}

inline void broadcastSoundEvent(class BlockSource& a0, int /*enum LevelSoundEvent/ a1, class Vec3 const& a2, class Block const& a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelSoundEvent/, class Vec3 const&, class Block const&, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelSoundEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<class Block const&>(a3), std::forward<struct ActorDefinitionIdentifier const&>(a4), std::forward<bool>(a5), std::forward<bool>(a6));
}

inline void broadcastSoundEvent(class BlockSource& a0, int /*enum LevelSoundEvent/ a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelSoundEvent/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelSoundEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3), std::forward<struct ActorDefinitionIdentifier const&>(a4), std::forward<bool>(a5), std::forward<bool>(a6));
}

inline bool canUseSkin(class SerializedSkin const& a0, class NetworkIdentifier const& a1, class mce::UUID const& a2, std::string const& a3) const {
    bool (Level::*rv)(class SerializedSkin const&, class NetworkIdentifier const&, class mce::UUID const&, std::string const&) const;
    *((void**)&rv) = dlsym("?canUseSkin@Level@@UEBA_NAEBVSerializedSkin@@AEBVNetworkIdentifier@@AEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<class SerializedSkin const&>(a0), std::forward<class NetworkIdentifier const&>(a1), std::forward<class mce::UUID const&>(a2), std::forward<std::string const&>(a3));
}

inline void clearTagCache() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?clearTagCache@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline bool copyAndLockMap(struct ActorUniqueID a0, struct ActorUniqueID a1) {
    bool (Level::*rv)(struct ActorUniqueID, struct ActorUniqueID);
    *((void**)&rv) = dlsym("?copyAndLockMap@Level@@UEAA_NUActorUniqueID@@0@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0), std::forward<struct ActorUniqueID>(a1));
}

inline int countUsersWithMatchingNetworkId(class NetworkIdentifier const& a0) const {
    int (Level::*rv)(class NetworkIdentifier const&) const;
    *((void**)&rv) = dlsym("?countUsersWithMatchingNetworkId@Level@@UEBAHAEBVNetworkIdentifier@@@Z");
    return (this->*rv)(std::forward<class NetworkIdentifier const&>(a0));
}

inline class Dimension* createDimension(class AutomaticID<class Dimension, int> a0) {
    class Dimension* (Level::*rv)(class AutomaticID<class Dimension, int>);
    *((void**)&rv) = dlsym("?createDimension@Level@@UEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
    return (this->*rv)(std::forward<class AutomaticID<class Dimension, int>>(a0));
}

inline class MapItemSavedData& createMapSavedData(std::vector<struct ActorUniqueID> const& a0, class BlockPos const& a1, class AutomaticID<class Dimension, int> a2, int a3) {
    class MapItemSavedData& (Level::*rv)(std::vector<struct ActorUniqueID> const&, class BlockPos const&, class AutomaticID<class Dimension, int>, int);
    *((void**)&rv) = dlsym("?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z");
    return (this->*rv)(std::forward<std::vector<struct ActorUniqueID> const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class AutomaticID<class Dimension, int>>(a2), std::forward<int>(a3));
}

inline class MapItemSavedData& createMapSavedData(struct ActorUniqueID const& a0, class BlockPos const& a1, class AutomaticID<class Dimension, int> a2, int a3) {
    class MapItemSavedData& (Level::*rv)(struct ActorUniqueID const&, class BlockPos const&, class AutomaticID<class Dimension, int>, int);
    *((void**)&rv) = dlsym("?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class AutomaticID<class Dimension, int>>(a2), std::forward<int>(a3));
}

inline void createPhotoStorage() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?createPhotoStorage@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void decrementTagCache(std::string const& a0, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& a1) {
    void (Level::*rv)(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);
    *((void**)&rv) = dlsym("?decrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&>(a1));
}

inline void denyEffect(class BlockSource& a0, class Vec3 const& a1) {
    void (Level::*rv)(class BlockSource&, class Vec3 const&);
    *((void**)&rv) = dlsym("?denyEffect@Level@@UEAAXAEAVBlockSource@@AEBVVec3@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Vec3 const&>(a1));
}

inline bool destroyBlock(class BlockSource& a0, class BlockPos const& a1, bool a2) {
    bool (Level::*rv)(class BlockSource&, class BlockPos const&, bool);
    *((void**)&rv) = dlsym("?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<bool>(a2));
}

inline void digestServerBlockProperties(class StartGamePacket const& a0, unsigned int a1) {
    void (Level::*rv)(class StartGamePacket const&, unsigned int);
    *((void**)&rv) = dlsym("?digestServerBlockProperties@Level@@UEAAXAEBVStartGamePacket@@I@Z");
    return (this->*rv)(std::forward<class StartGamePacket const&>(a0), std::forward<unsigned int>(a1));
}

inline void digestServerItemComponents(class ItemComponentPacket const& a0) {
    void (Level::*rv)(class ItemComponentPacket const&);
    *((void**)&rv) = dlsym("?digestServerItemComponents@Level@@UEAAXAEBVItemComponentPacket@@@Z");
    return (this->*rv)(std::forward<class ItemComponentPacket const&>(a0));
}

inline void directTickEntities(class BlockSource& a0) {
    void (Level::*rv)(class BlockSource&);
    *((void**)&rv) = dlsym("?directTickEntities@Level@@UEAAXAEAVBlockSource@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0));
}

inline void dropEntryFromTagCache(std::string const& a0) {
    void (Level::*rv)(std::string const&);
    *((void**)&rv) = dlsym("?dropEntryFromTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline void entityChangeDimension(class Actor& a0, class AutomaticID<class Dimension, int> a1, class std::optional<class Vec3> a2) {
    void (Level::*rv)(class Actor&, class AutomaticID<class Dimension, int>, class std::optional<class Vec3>);
    *((void**)&rv) = dlsym("?entityChangeDimension@Level@@UEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@V?$optional@VVec3@@@std@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class AutomaticID<class Dimension, int>>(a1), std::forward<class std::optional<class Vec3>>(a2));
}

inline struct ActorUniqueID expandMapByID(struct ActorUniqueID a0, bool a1) {
    struct ActorUniqueID (Level::*rv)(struct ActorUniqueID, bool);
    *((void**)&rv) = dlsym("?expandMapByID@Level@@UEAA?AUActorUniqueID@@U2@_N@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0), std::forward<bool>(a1));
}

inline void explode(class Explosion& a0) {
    void (Level::*rv)(class Explosion&);
    *((void**)&rv) = dlsym("?explode@Level@@UEAAXAEAVExplosion@@@Z");
    return (this->*rv)(std::forward<class Explosion&>(a0));
}

inline void explode(class BlockSource& a0, class Actor* a1, class Vec3 const& a2, float a3, bool a4, bool a5, float a6, bool a7) {
    void (Level::*rv)(class BlockSource&, class Actor*, class Vec3 const&, float, bool, bool, float, bool);
    *((void**)&rv) = dlsym("?explode@Level@@UEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Actor*>(a1), std::forward<class Vec3 const&>(a2), std::forward<float>(a3), std::forward<bool>(a4), std::forward<bool>(a5), std::forward<float>(a6), std::forward<bool>(a7));
}

inline bool extinguishFire(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) {
    bool (Level::*rv)(class BlockSource&, class BlockPos const&, unsigned char);
    *((void**)&rv) = dlsym("?extinguishFire@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
}

inline std::unique_ptr<class Path> findPath(class Actor& a0, int a1, int a2, int a3, class NavigationComponent& a4) {
    std::unique_ptr<class Path> (Level::*rv)(class Actor&, int, int, int, class NavigationComponent&);
    *((void**)&rv) = dlsym("?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHAEAVNavigationComponent@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<int>(a3), std::forward<class NavigationComponent&>(a4));
}

inline std::unique_ptr<class Path> findPath(class Actor& a0, class Actor& a1, class NavigationComponent& a2) {
    std::unique_ptr<class Path> (Level::*rv)(class Actor&, class Actor&, class NavigationComponent&);
    *((void**)&rv) = dlsym("?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0AEAVNavigationComponent@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class Actor&>(a1), std::forward<class NavigationComponent&>(a2));
}

inline class Player* findPlayer(class std::function<bool(class Player const&)> a0) const {
    class Player* (Level::*rv)(class std::function<bool(class Player const&)>) const;
    *((void**)&rv) = dlsym("?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z");
    return (this->*rv)(std::forward<class std::function<bool(class Player const&)>>(a0));
}

inline class Player* findPlayer(class std::function<bool(class WeakEntityRef const&)> a0) const {
    class Player* (Level::*rv)(class std::function<bool(class WeakEntityRef const&)>) const;
    *((void**)&rv) = dlsym("?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVWeakEntityRef@@@Z@std@@@Z");
    return (this->*rv)(std::forward<class std::function<bool(class WeakEntityRef const&)>>(a0));
}

inline void flushRunTimeLighting() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?flushRunTimeLighting@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void forEachDimension(class std::function<bool(class Dimension const&)> a0) const {
    void (Level::*rv)(class std::function<bool(class Dimension const&)>) const;
    *((void**)&rv) = dlsym("?forEachDimension@Level@@UEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z");
    return (this->*rv)(std::forward<class std::function<bool(class Dimension const&)>>(a0));
}

inline void forEachDimension(class std::function<bool(class Dimension&)> a0) {
    void (Level::*rv)(class std::function<bool(class Dimension&)>);
    *((void**)&rv) = dlsym("?forEachDimension@Level@@UEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z");
    return (this->*rv)(std::forward<class std::function<bool(class Dimension&)>>(a0));
}

inline void forEachUser(class std::function<bool(class EntityContext&)> a0) const {
    void (Level::*rv)(class std::function<bool(class EntityContext&)>) const;
    *((void**)&rv) = dlsym("?forEachUser@Level@@UEBAXV?$function@$$A6A_NAEAVEntityContext@@@Z@std@@@Z");
    return (this->*rv)(std::forward<class std::function<bool(class EntityContext&)>>(a0));
}

inline void forceFlushRemovedPlayers() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?forceFlushRemovedPlayers@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void forceRemoveEntity(class Actor& a0) {
    void (Level::*rv)(class Actor&);
    *((void**)&rv) = dlsym("?forceRemoveEntity@Level@@UEAAXAEAVActor@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0));
}

inline int getActivePlayerCount() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActivePlayerCount@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline std::vector<class WeakEntityRef> const& getActiveUsers() const {
    std::vector<class WeakEntityRef> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActiveUsers@Level@@UEBAAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline int getActiveUsersCount() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActiveUsersCount@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline class ActorAnimationControllerGroup* getActorAnimationControllerGroup() const {
    class ActorAnimationControllerGroup* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActorAnimationControllerGroup@Level@@UEBAPEAVActorAnimationControllerGroup@@XZ");
    return (this->*rv)();
}

inline class ActorAnimationGroup* getActorAnimationGroup() const {
    class ActorAnimationGroup* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActorAnimationGroup@Level@@UEBAPEAVActorAnimationGroup@@XZ");
    return (this->*rv)();
}

inline class ActorEventCoordinator& getActorEventCoordinator() {
    class ActorEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getActorEventCoordinator@Level@@UEAAAEAVActorEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class ActorFactory const& getActorFactory() const {
    class ActorFactory const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActorFactory@Level@@UEBAAEBVActorFactory@@XZ");
    return (this->*rv)();
}

inline class ActorFactory& getActorFactory() {
    class ActorFactory& (Level::*rv)();
    *((void**)&rv) = dlsym("?getActorFactory@Level@@UEAAAEAVActorFactory@@XZ");
    return (this->*rv)();
}

inline class ActorInfoRegistry* getActorInfoRegistry() {
    class ActorInfoRegistry* (Level::*rv)();
    *((void**)&rv) = dlsym("?getActorInfoRegistry@Level@@UEAAPEAVActorInfoRegistry@@XZ");
    return (this->*rv)();
}

inline class PropertyGroupManager& getActorPropertyGroup() const {
    class PropertyGroupManager& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getActorPropertyGroup@Level@@UEBAAEAVPropertyGroupManager@@XZ");
    return (this->*rv)();
}

inline struct AdventureSettings& getAdventureSettings() {
    struct AdventureSettings& (Level::*rv)();
    *((void**)&rv) = dlsym("?getAdventureSettings@Level@@UEAAAEAUAdventureSettings@@XZ");
    return (this->*rv)();
}

inline std::vector<class WeakEntityRef>& getAutonomousActors() {
    std::vector<class WeakEntityRef>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getAutonomousActors@Level@@UEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline std::vector<class OwnerPtrT<struct EntityRefTraits>>& getAutonomousLoadedEntities() {
    std::vector<class OwnerPtrT<struct EntityRefTraits>>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getAutonomousLoadedEntities@Level@@UEAAAEAV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline class BehaviorFactory&
    getBehaviorFactory() const {
    class BehaviorFactory& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBehaviorFactory@Level@@UEBAAEAVBehaviorFactory@@XZ");
    return (this->*rv)();
}

inline class BehaviorTreeGroup& getBehaviorTreeGroup() const {
    class BehaviorTreeGroup& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBehaviorTreeGroup@Level@@UEBAAEAVBehaviorTreeGroup@@XZ");
    return (this->*rv)();
}

inline class BiomeComponentFactory const& getBiomeComponentFactory() const {
    class BiomeComponentFactory const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBiomeComponentFactory@Level@@UEBAAEBVBiomeComponentFactory@@XZ");
    return (this->*rv)();
}

inline class BiomeComponentFactory& getBiomeComponentFactory() {
    class BiomeComponentFactory& (Level::*rv)();
    *((void**)&rv) = dlsym("?getBiomeComponentFactory@Level@@UEAAAEAVBiomeComponentFactory@@XZ");
    return (this->*rv)();
}

inline class BiomeRegistry const& getBiomeRegistry() const {
    class BiomeRegistry const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ");
    return (this->*rv)();
}

inline class BiomeRegistry& getBiomeRegistry() {
    class BiomeRegistry& (Level::*rv)();
    *((void**)&rv) = dlsym("?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ");
    return (this->*rv)();
}

inline class BlockComponentFactory& getBlockComponentFactory() {
    class BlockComponentFactory& (Level::*rv)();
    *((void**)&rv) = dlsym("?getBlockComponentFactory@Level@@UEAAAEAVBlockComponentFactory@@XZ");
    return (this->*rv)();
}

inline class BlockComponentFactory const& getBlockComponentFactory() const {
    class BlockComponentFactory const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBlockComponentFactory@Level@@UEBAAEBVBlockComponentFactory@@XZ");
    return (this->*rv)();
}

inline class BlockDefinitionGroup* getBlockDefinitions() const {
    class BlockDefinitionGroup* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBlockDefinitions@Level@@UEBAPEAVBlockDefinitionGroup@@XZ");
    return (this->*rv)();
}

inline class BlockEventCoordinator& getBlockEventCoordinator() {
    class BlockEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getBlockEventCoordinator@Level@@UEAAAEAVBlockEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class BlockPalette const& getBlockPalette() const {
    class BlockPalette const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ");
    return (this->*rv)();
}

inline class BlockPalette& getBlockPalette() {
    class BlockPalette& (Level::*rv)();
    *((void**)&rv) = dlsym("?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ");
    return (this->*rv)();
}

inline class BlockReducer* getBlockReducer() const {
    class BlockReducer* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getBlockReducer@Level@@UEBAPEAVBlockReducer@@XZ");
    return (this->*rv)();
}

inline unsigned int getChunkTickRange() const {
    unsigned int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getChunkTickRange@Level@@UEBAIXZ");
    return (this->*rv)();
}

inline class ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() {
    class ClientPlayerEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getClientPlayerEventCoordinator@Level@@UEAAAEAVClientPlayerEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class ResourcePackManager* getClientResourcePackManager() const {
    class ResourcePackManager* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getClientResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ");
    return (this->*rv)();
}

inline std::vector<class ChunkPos> const& getClientTickingOffsets() const {
    std::vector<class ChunkPos> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getClientTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline struct Tick const getCurrentServerTick() const {
    struct Tick const (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getCurrentServerTick@Level@@UEBA?BUTick@@XZ");
    return (this->*rv)();
}

inline struct Tick const& getCurrentTick() const {
    struct Tick const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getCurrentTick@Level@@UEBAAEBUTick@@XZ");
    return (this->*rv)();
}

inline class Abilities& getDefaultAbilities() {
    class Abilities& (Level::*rv)();
    *((void**)&rv) = dlsym("?getDefaultAbilities@Level@@UEAAAEAVAbilities@@XZ");
    return (this->*rv)();
}

inline int /*enum GameType/ getDefaultGameType() const {
    int /*enum GameType/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getDefaultGameType@Level@@UEBA?AW4GameType@@XZ");
    return (this->*rv)();
}

inline class BlockPos const& getDefaultSpawn() const {
    class BlockPos const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getDefaultSpawn@Level@@UEBAAEBVBlockPos@@XZ");
    return (this->*rv)();
}

inline int /*enum Difficulty/ getDifficulty() const {
    int /*enum Difficulty/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getDifficulty@Level@@UEBA?AW4Difficulty@@XZ");
    return (this->*rv)();
}


inline class DimensionConversionData getDimensionConversionData() const {
    class DimensionConversionData (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getDimensionConversionData@Level@@UEBA?AVDimensionConversionData@@XZ");
    return (this->*rv)();
}

inline class Factory<class Dimension, class Level&, class Scheduler&>& getDimensionFactory() {
    class Factory<class Dimension, class Level&, class Scheduler&>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getDimensionFactory@Level@@UEAAAEAV?$Factory@VDimension@@AEAVLevel@@AEAVScheduler@@@@XZ");
    return (this->*rv)();
}

inline class Factory<class Dimension, class Level&, class Scheduler&> const&
    getDimensionFactory() const {
    class Factory<class Dimension, class Level&, class Scheduler&> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getDimensionFactory@Level@@UEBAAEBV?$Factory@VDimension@@AEAVLevel@@AEAVScheduler@@@@XZ");
    return (this->*rv)();
}

inline class std::optional<struct EducationLevelSettings> const&
    getEducationLevelSettings() const {
    class std::optional<struct EducationLevelSettings> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getEducationLevelSettings@Level@@UEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ");
    return (this->*rv)();
}

inline std::vector<class OwnerPtrT<struct EntityRefTraits>> const&
    getEntities() const {
    std::vector<class OwnerPtrT<struct EntityRefTraits>> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getEntities@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline class ActorDefinitionGroup*
    getEntityDefinitions() const {
    class ActorDefinitionGroup* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getEntityDefinitions@Level@@UEBAPEAVActorDefinitionGroup@@XZ");
    return (this->*rv)();
}

inline class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> getEntityRegistryOwner() {
    class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> (Level::*rv)();
    *((void**)&rv) = dlsym("?getEntityRegistryOwner@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@gsl@@XZ");
    return (this->*rv)();
}

inline class EntitySystems&
    getEntitySystems() {
    class EntitySystems& (Level::*rv)();
    *((void**)&rv) = dlsym("?getEntitySystems@Level@@UEAAAEAVEntitySystems@@XZ");
    return (this->*rv)();
}

inline class IMinecraftEventing& getEventing() {
    class IMinecraftEventing& (Level::*rv)();
    *((void**)&rv) = dlsym("?getEventing@Level@@UEAAAEAVIMinecraftEventing@@XZ");
    return (this->*rv)();
}

inline class FeatureRegistry& getFeatureRegistry() {
    class FeatureRegistry& (Level::*rv)();
    *((void**)&rv) = dlsym("?getFeatureRegistry@Level@@UEAAAEAVFeatureRegistry@@XZ");
    return (this->*rv)();
}

inline class FeatureRegistry const& getFeatureRegistry() const {
    class FeatureRegistry const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getFeatureRegistry@Level@@UEBAAEBVFeatureRegistry@@XZ");
    return (this->*rv)();
}

inline class FeatureTypeFactory const& getFeatureTypeFactory() const {
    class FeatureTypeFactory const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getFeatureTypeFactory@Level@@UEBAAEBVFeatureTypeFactory@@XZ");
    return (this->*rv)();
}

inline class FeatureTypeFactory& getFeatureTypeFactory() {
    class FeatureTypeFactory& (Level::*rv)();
    *((void**)&rv) = dlsym("?getFeatureTypeFactory@Level@@UEAAAEAVFeatureTypeFactory@@XZ");
    return (this->*rv)();
}

inline class GameRules const& getGameRules() const {
    class GameRules const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getGameRules@Level@@UEBAAEBVGameRules@@XZ");
    return (this->*rv)();
}

inline class GameRules& getGameRules() {
    class GameRules& (Level::*rv)();
    *((void**)&rv) = dlsym("?getGameRules@Level@@UEAAAEAVGameRules@@XZ");
    return (this->*rv)();
}

inline std::vector<class WeakEntityRef>& getGlobalActors() {
    std::vector<class WeakEntityRef>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getGlobalActors@Level@@UEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline class HitResult& getHitResult() {
    class HitResult& (Level::*rv)();
    *((void**)&rv) = dlsym("?getHitResult@Level@@UEAAAEAVHitResult@@XZ");
    return (this->*rv)();
}

inline class TaskGroup& getIOTasksGroup() {
    class TaskGroup& (Level::*rv)();
    *((void**)&rv) = dlsym("?getIOTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ");
    return (this->*rv)();
}

inline std::string const& getImmersiveReaderString() const {
    std::string const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getImmersiveReaderString@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    return (this->*rv)();
}

inline class InternalComponentRegistry& getInternalComponentRegistry() const {
    class InternalComponentRegistry& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getInternalComponentRegistry@Level@@UEBAAEAVInternalComponentRegistry@@XZ");
    return (this->*rv)();
}

inline class ItemEventCoordinator& getItemEventCoordinator() {
    class ItemEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getItemEventCoordinator@Level@@UEAAAEAVItemEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class JigsawStructureRegistry const& getJigsawStructureRegistry() const {
    class JigsawStructureRegistry const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getJigsawStructureRegistry@Level@@UEBAAEBVJigsawStructureRegistry@@XZ");
    return (this->*rv)();
}

inline class JigsawStructureRegistry& getJigsawStructureRegistry() {
    class JigsawStructureRegistry& (Level::*rv)();
    *((void**)&rv) = dlsym("?getJigsawStructureRegistry@Level@@UEAAAEAVJigsawStructureRegistry@@XZ");
    return (this->*rv)();
}

inline bool getLANBroadcast() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLANBroadcast@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool getLANBroadcastIntent() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLANBroadcastIntent@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline class LevelData& getLevelData() {
    class LevelData& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLevelData@Level@@UEAAAEAVLevelData@@XZ");
    return (this->*rv)();
}

inline class LevelData const& getLevelData() const {
    class LevelData const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLevelData@Level@@UEBAAEBVLevelData@@XZ");
    return (this->*rv)();
}

inline class WeakRefT<struct EntityRefTraits> getLevelEntity() {
    class WeakRefT<struct EntityRefTraits> (Level::*rv)();
    *((void**)&rv) = dlsym("?getLevelEntity@Level@@UEAA?AV?$WeakRefT@UEntityRefTraits@@@@XZ");
    return (this->*rv)();
}

inline class LevelEventCoordinator&
    getLevelEventCoordinator() {
    class LevelEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLevelEventCoordinator@Level@@UEAAAEAVLevelEventCoordinator@@XZ");
    return (this->*rv)();
}

inline std::string getLevelId() const {
    std::string (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLevelId@Level@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    return (this->*rv)();
}

inline class LevelStorage const& getLevelStorage() const {
    class LevelStorage const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLevelStorage@Level@@UEBAAEBVLevelStorage@@XZ");
    return (this->*rv)();
}

inline class LevelStorage& getLevelStorage() {
    class LevelStorage& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLevelStorage@Level@@UEAAAEAVLevelStorage@@XZ");
    return (this->*rv)();
}

inline class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>& getLightTextureImageBuilderFactory() {
    class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLightTextureImageBuilderFactory@Level@@UEAAAEAV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ");
    return (this->*rv)();
}

inline class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const&
    getLightTextureImageBuilderFactory() const {
    class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getLightTextureImageBuilderFactory@Level@@UEBAAEBV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ");
    return (this->*rv)();
}

inline class HitResult&
    getLiquidHitResult() {
    class HitResult& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLiquidHitResult@Level@@UEAAAEAVHitResult@@XZ");
    return (this->*rv)();
}

inline class LootTables& getLootTables() {
    class LootTables& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLootTables@Level@@UEAAAEAVLootTables@@XZ");
    return (this->*rv)();
}

inline class MapItemSavedData* getMapSavedData(class CompoundTag const& a0) {
    class MapItemSavedData* (Level::*rv)(class CompoundTag const&);
    *((void**)&rv) = dlsym("?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@AEBVCompoundTag@@@Z");
    return (this->*rv)(std::forward<class CompoundTag const&>(a0));
}

inline class MapItemSavedData* getMapSavedData(class CompoundTag const* a0) {
    class MapItemSavedData* (Level::*rv)(class CompoundTag const*);
    *((void**)&rv) = dlsym("?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@PEBVCompoundTag@@@Z");
    return (this->*rv)(std::forward<class CompoundTag const*>(a0));
}

inline class MapItemSavedData* getMapSavedData(struct ActorUniqueID a0) {
    class MapItemSavedData* (Level::*rv)(struct ActorUniqueID);
    *((void**)&rv) = dlsym("?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0));
}

inline class Mob* getMob(struct ActorUniqueID a0) const {
    class Mob* (Level::*rv)(struct ActorUniqueID) const;
    *((void**)&rv) = dlsym("?getMob@Level@@UEBAPEAVMob@@UActorUniqueID@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0));
}

inline bool getMultiplayerGameIntent() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getMultiplayerGameIntent@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline class NetEventCallback* getNetEventCallback() const {
    class NetEventCallback* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getNetEventCallback@Level@@UEBAPEAVNetEventCallback@@XZ");
    return (this->*rv)();
}

inline int getNetherScale() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getNetherScale@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline int getNewPlayerId() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getNewPlayerId@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline struct ActorUniqueID getNewUniqueID() {
    struct ActorUniqueID (Level::*rv)();
    *((void**)&rv) = dlsym("?getNewUniqueID@Level@@UEAA?AUActorUniqueID@@XZ");
    return (this->*rv)();
}

inline class ActorRuntimeID getNextRuntimeID() {
    class ActorRuntimeID (Level::*rv)();
    *((void**)&rv) = dlsym("?getNextRuntimeID@Level@@UEAA?AVActorRuntimeID@@XZ");
    return (this->*rv)();
}

inline int getNumRemotePlayers() {
    int (Level::*rv)();
    *((void**)&rv) = dlsym("?getNumRemotePlayers@Level@@UEAAHXZ");
    return (this->*rv)();
}

inline class PacketSender* getPacketSender() const {
    class PacketSender* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPacketSender@Level@@UEBAPEAVPacketSender@@XZ");
    return (this->*rv)();
}

inline class PauseManager& getPauseManager() {
    class PauseManager& (Level::*rv)();
    *((void**)&rv) = dlsym("?getPauseManager@Level@@UEAAAEAVPauseManager@@XZ");
    return (this->*rv)();
}

inline class PauseManager const& getPauseManager() const {
    class PauseManager const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPauseManager@Level@@UEBAAEBVPauseManager@@XZ");
    return (this->*rv)();
}

inline class PhotoStorage& getPhotoStorage() {
    class PhotoStorage& (Level::*rv)();
    *((void**)&rv) = dlsym("?getPhotoStorage@Level@@UEAAAEAVPhotoStorage@@XZ");
    return (this->*rv)();
}

inline int /*enum Social::GamePublishSetting/ getPlatformBroadcastIntent() const {
    int /*enum Social::GamePublishSetting/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPlatformBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ");
    return (this->*rv)();
}

inline int /*enum Social::GamePublishSetting/ getPlatformBroadcastMode() const {
    int /*enum Social::GamePublishSetting/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPlatformBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ");
    return (this->*rv)();
}

inline class Player* getPlatformPlayer(std::string const& a0) const {
    class Player* (Level::*rv)(std::string const&) const;
    *((void**)&rv) = dlsym("?getPlatformPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class Player* getPlayer(std::string const& a0) const {
    class Player* (Level::*rv)(std::string const&) const;
    *((void**)&rv) = dlsym("?getPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class Player* getPlayer(class mce::UUID const& a0) const {
    class Player* (Level::*rv)(class mce::UUID const&) const;
    *((void**)&rv) = dlsym("?getPlayer@Level@@UEBAPEAVPlayer@@AEBVUUID@mce@@@Z");
    return (this->*rv)(std::forward<class mce::UUID const&>(a0));
}

inline class Player* getPlayer(struct ActorUniqueID a0) const {
    class Player* (Level::*rv)(struct ActorUniqueID) const;
    *((void**)&rv) = dlsym("?getPlayer@Level@@UEBAPEAVPlayer@@UActorUniqueID@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0));
}

inline class Abilities* getPlayerAbilities(struct ActorUniqueID const& a0) {
    class Abilities* (Level::*rv)(struct ActorUniqueID const&);
    *((void**)&rv) = dlsym("?getPlayerAbilities@Level@@UEAAPEAVAbilities@@AEBUActorUniqueID@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID const&>(a0));
}

inline class Player* getPlayerByXuid(std::string const& a0) const {
    class Player* (Level::*rv)(std::string const&) const;
    *((void**)&rv) = dlsym("?getPlayerByXuid@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class mce::Color getPlayerColor(class Player const& a0) const {
    class mce::Color (Level::*rv)(class Player const&) const;
    *((void**)&rv) = dlsym("?getPlayerColor@Level@@UEBA?AVColor@mce@@AEBVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player const&>(a0));
}

inline class Player* getPlayerFromServerId(std::string const& a0) const {
    class Player* (Level::*rv)(std::string const&) const;
    *((void**)&rv) = dlsym("?getPlayerFromServerId@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class Player* getPlayerFromUnknownIdentifier(std::string const& a0) const {
    class Player* (Level::*rv)(std::string const&) const;
    *((void**)&rv) = dlsym("?getPlayerFromUnknownIdentifier@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>>& getPlayerList() {
    class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getPlayerList@Level@@UEAAAEAV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ");
    return (this->*rv)();
}

inline class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const&
    getPlayerList() const {
    class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPlayerList@Level@@UEBAAEBV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ");
    return (this->*rv)();
}

inline struct PlayerMovementSettings const&
    getPlayerMovementSettings() const {
    struct PlayerMovementSettings const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPlayerMovementSettings@Level@@UEBAAEBUPlayerMovementSettings@@XZ");
    return (this->*rv)();
}

inline std::string getPlayerNames() {
    std::string (Level::*rv)();
    *((void**)&rv) = dlsym("?getPlayerNames@Level@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    return (this->*rv)();
}

inline std::string const& getPlayerPlatformOnlineId(class mce::UUID const& a0) const {
    std::string const& (Level::*rv)(class mce::UUID const&) const;
    *((void**)&rv) = dlsym("?getPlayerPlatformOnlineId@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z");
    return (this->*rv)(std::forward<class mce::UUID const&>(a0));
}

inline std::string const& getPlayerXUID(class mce::UUID const& a0) const {
    std::string const& (Level::*rv)(class mce::UUID const&) const;
    *((void**)&rv) = dlsym("?getPlayerXUID@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z");
    return (this->*rv)(std::forward<class mce::UUID const&>(a0));
}

inline class PortalForcer& getPortalForcer() {
    class PortalForcer& (Level::*rv)();
    *((void**)&rv) = dlsym("?getPortalForcer@Level@@UEAAAEAVPortalForcer@@XZ");
    return (this->*rv)();
}

inline class PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const {
    class PositionTrackingDB::PositionTrackingDBClient* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPositionTrackerDBClient@Level@@UEBAPEAVPositionTrackingDBClient@PositionTrackingDB@@XZ");
    return (this->*rv)();
}

inline class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const {
    class PositionTrackingDB::PositionTrackingDBServer* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPositionTrackerDBServer@Level@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ");
    return (this->*rv)();
}

inline class Player* getPrimaryLocalPlayer() const {
    class Player* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getPrimaryLocalPlayer@Level@@UEBAPEAVPlayer@@XZ");
    return (this->*rv)();
}

inline class ProjectileFactory& getProjectileFactory() const {
    class ProjectileFactory& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getProjectileFactory@Level@@UEBAAEAVProjectileFactory@@XZ");
    return (this->*rv)();
}

inline class Random& getRandom() const {
    class Random& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getRandom@Level@@UEBAAEAVRandom@@XZ");
    return (this->*rv)();
}

inline class Player* getRandomPlayer() {
    class Player* (Level::*rv)();
    *((void**)&rv) = dlsym("?getRandomPlayer@Level@@UEAAPEAVPlayer@@XZ");
    return (this->*rv)();
}

inline class Recipes& getRecipes() const {
    class Recipes& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getRecipes@Level@@UEBAAEAVRecipes@@XZ");
    return (this->*rv)();
}

inline class BlockLegacy const& getRegisteredBorderBlock() const {
    class BlockLegacy const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getRegisteredBorderBlock@Level@@UEBAAEBVBlockLegacy@@XZ");
    return (this->*rv)();
}

inline class PlayerEventCoordinator& getRemotePlayerEventCoordinator() {
    class PlayerEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getRemotePlayerEventCoordinator@Level@@UEAAAEAVPlayerEventCoordinator@@XZ");
    return (this->*rv)();
}

inline std::vector<class Actor*> getRuntimeActorList() const {
    std::vector<class Actor*> (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getRuntimeActorList@Level@@UEBA?AV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline class Actor* getRuntimeEntity(class ActorRuntimeID a0, bool a1) const {
    class Actor* (Level::*rv)(class ActorRuntimeID, bool) const;
    *((void**)&rv) = dlsym("?getRuntimeEntity@Level@@UEBAPEAVActor@@VActorRuntimeID@@_N@Z");
    return (this->*rv)(std::forward<class ActorRuntimeID>(a0), std::forward<bool>(a1));
}

inline class Player* getRuntimePlayer(class ActorRuntimeID a0) const {
    class Player* (Level::*rv)(class ActorRuntimeID) const;
    *((void**)&rv) = dlsym("?getRuntimePlayer@Level@@UEBAPEAVPlayer@@VActorRuntimeID@@@Z");
    return (this->*rv)(std::forward<class ActorRuntimeID>(a0));
}

inline class SavedDataStorage& getSavedData() const {
    class SavedDataStorage& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSavedData@Level@@UEBAAEAVSavedDataStorage@@XZ");
    return (this->*rv)();
}

inline class Scoreboard& getScoreboard() {
    class Scoreboard& (Level::*rv)();
    *((void**)&rv) = dlsym("?getScoreboard@Level@@UEAAAEAVScoreboard@@XZ");
    return (this->*rv)();
}

inline class Core::PathBuffer<std::string> getScreenshotsFolder() const {
    class Core::PathBuffer<std::string> (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getScreenshotsFolder@Level@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ");
    return (this->*rv)();
}

inline unsigned int
    getSeed() {
    unsigned int (Level::*rv)();
    *((void**)&rv) = dlsym("?getSeed@Level@@UEAAIXZ");
    return (this->*rv)();
}

inline class ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() {
    class ServerNetworkEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getServerNetworkEventCoordinator@Level@@UEAAAEAVServerNetworkEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() {
    class ServerPlayerEventCoordinator& (Level::*rv)();
    *((void**)&rv) = dlsym("?getServerPlayerEventCoordinator@Level@@UEAAAEAVServerPlayerEventCoordinator@@XZ");
    return (this->*rv)();
}

inline class ResourcePackManager* getServerResourcePackManager() const {
    class ResourcePackManager* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getServerResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ");
    return (this->*rv)();
}

inline class BlockPos const& getSharedSpawnPos() const {
    class BlockPos const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSharedSpawnPos@Level@@UEBAAEBVBlockPos@@XZ");
    return (this->*rv)();
}

inline bool getSimPaused() {
    bool (Level::*rv)();
    *((void**)&rv) = dlsym("?getSimPaused@Level@@UEAA_NXZ");
    return (this->*rv)();
}

inline class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const {
    class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSoundPlayer@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@XZ");
    return (this->*rv)();
}

inline class SpawnGroupRegistry const*
    getSpawnGroupRegistry() const {
    class SpawnGroupRegistry const* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawnGroupRegistry@Level@@UEBAPEBVSpawnGroupRegistry@@XZ");
    return (this->*rv)();
}

inline class ActorSpawnRuleGroup const* getSpawnRules() const {
    class ActorSpawnRuleGroup const* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawnRules@Level@@UEBAPEBVActorSpawnRuleGroup@@XZ");
    return (this->*rv)();
}

inline class ActorSpawnRuleGroup* getSpawnRulesMutable() const {
    class ActorSpawnRuleGroup* (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawnRulesMutable@Level@@UEBAPEAVActorSpawnRuleGroup@@XZ");
    return (this->*rv)();
}

inline struct SpawnSettings const& getSpawnSettings() const {
    struct SpawnSettings const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawnSettings@Level@@UEBAAEBUSpawnSettings@@XZ");
    return (this->*rv)();
}

inline unsigned int getSpawnableTickedMobCountPrevious() const {
    unsigned int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawnableTickedMobCountPrevious@Level@@UEBAIXZ");
    return (this->*rv)();
}

inline class Spawner& getSpawner() const {
    class Spawner& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSpawner@Level@@UEBAAEAVSpawner@@XZ");
    return (this->*rv)();
}

inline float getSpecialMultiplier(class AutomaticID<class Dimension, int> a0) const {
    float (Level::*rv)(class AutomaticID<class Dimension, int>) const;
    *((void**)&rv) = dlsym("?getSpecialMultiplier@Level@@UEBAMV?$AutomaticID@VDimension@@H@@@Z");
    return (this->*rv)(std::forward<class AutomaticID<class Dimension, int>>(a0));
}

inline class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const getStructureManager() const {
    class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getStructureManager@Level@@UEBA?BV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ");
    return (this->*rv)();
}

inline class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>
    getStructureManager() {
    class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> (Level::*rv)();
    *((void**)&rv) = dlsym("?getStructureManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ");
    return (this->*rv)();
}

inline class SubChunkRequestManager*
    getSubChunkRequestManager() {
    class SubChunkRequestManager* (Level::*rv)();
    *((void**)&rv) = dlsym("?getSubChunkRequestManager@Level@@UEAAPEAVSubChunkRequestManager@@XZ");
    return (this->*rv)();
}

inline class SurfaceBuilderRegistry& getSurfaceBuilderRegistry() {
    class SurfaceBuilderRegistry& (Level::*rv)();
    *((void**)&rv) = dlsym("?getSurfaceBuilderRegistry@Level@@UEAAAEAVSurfaceBuilderRegistry@@XZ");
    return (this->*rv)();
}

inline class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const {
    class SurfaceBuilderRegistry const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getSurfaceBuilderRegistry@Level@@UEBAAEBVSurfaceBuilderRegistry@@XZ");
    return (this->*rv)();
}

inline class TaskGroup& getSyncTasksGroup() {
    class TaskGroup& (Level::*rv)();
    *((void**)&rv) = dlsym("?getSyncTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ");
    return (this->*rv)();
}

inline class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& getTagRegistry() {
    class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getTagRegistry@Level@@UEAAAEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@XZ");
    return (this->*rv)();
}

inline bool
    getTearingDown() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getTearingDown@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline class ITickingArea* getTickingArea(class mce::UUID const& a0) const {
    class ITickingArea* (Level::*rv)(class mce::UUID const&) const;
    *((void**)&rv) = dlsym("?getTickingArea@Level@@UEBAPEAVITickingArea@@AEBVUUID@mce@@@Z");
    return (this->*rv)(std::forward<class mce::UUID const&>(a0));
}

inline class TickingAreasManager& getTickingAreasMgr() {
    class TickingAreasManager& (Level::*rv)();
    *((void**)&rv) = dlsym("?getTickingAreasMgr@Level@@UEAAAEAVTickingAreasManager@@XZ");
    return (this->*rv)();
}

inline std::vector<class ChunkPos> const& getTickingOffsets() const {
    std::vector<class ChunkPos> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline int getTime() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getTime@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline class TradeTables* getTradeTables() {
    class TradeTables* (Level::*rv)();
    *((void**)&rv) = dlsym("?getTradeTables@Level@@UEAAPEAVTradeTables@@XZ");
    return (this->*rv)();
}

inline class IUnknownBlockTypeRegistry& getUnknownBlockTypeRegistry() {
    class IUnknownBlockTypeRegistry& (Level::*rv)();
    *((void**)&rv) = dlsym("?getUnknownBlockTypeRegistry@Level@@UEAAAEAVIUnknownBlockTypeRegistry@@XZ");
    return (this->*rv)();
}

inline int getUserCount() const {
    int (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getUserCount@Level@@UEBAHXZ");
    return (this->*rv)();
}

inline std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getUsers() const {
    std::vector<class OwnerPtrT<struct EntityRefTraits>> const& (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getUsers@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline std::vector<class OwnerPtrT<struct EntityRefTraits>>&
    getUsers() {
    std::vector<class OwnerPtrT<struct EntityRefTraits>>& (Level::*rv)();
    *((void**)&rv) = dlsym("?getUsers@Level@@UEAAAEAV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ");
    return (this->*rv)();
}

inline int /*enum Social::GamePublishSetting/
    getXBLBroadcastIntent() const {
    int /*enum Social::GamePublishSetting/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getXBLBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ");
    return (this->*rv)();
}

inline int /*enum Social::GamePublishSetting/ getXBLBroadcastMode() const {
    int /*enum Social::GamePublishSetting/ (Level::*rv)() const;
    *((void**)&rv) = dlsym("?getXBLBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ");
    return (this->*rv)();
}

inline void handleLevelEvent(int /*enum LevelEvent/ a0, class CompoundTag const& a1) {
    void (Level::*rv)(int /*enum LevelEvent/, class CompoundTag const&);
    *((void**)&rv) = dlsym("?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z");
    return (this->*rv)(std::forward<int /*enum LevelEvent/>(a0), std::forward<class CompoundTag const&>(a1));
}

inline void handleLevelEvent(int /*enum LevelEvent/ a0, class Vec3 const& a1, int a2) {
    void (Level::*rv)(int /*enum LevelEvent/, class Vec3 const&, int);
    *((void**)&rv) = dlsym("?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z");
    return (this->*rv)(std::forward<int /*enum LevelEvent/>(a0), std::forward<class Vec3 const&>(a1), std::forward<int>(a2));
}

inline void handleSoundEvent(std::string const& a0, class Vec3 const& a1, float a2, float a3) {
    void (Level::*rv)(std::string const&, class Vec3 const&, float, float);
    *((void**)&rv) = dlsym("?handleSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<float>(a2), std::forward<float>(a3));
}

inline void handleSoundEvent(int /*enum LevelSoundEvent/ a0, class Vec3 const& a1, int a2, struct ActorDefinitionIdentifier const& a3, bool a4, bool a5) {
    void (Level::*rv)(int /*enum LevelSoundEvent/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?handleSoundEvent@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z");
    return (this->*rv)(std::forward<int /*enum LevelSoundEvent/>(a0), std::forward<class Vec3 const&>(a1), std::forward<int>(a2), std::forward<struct ActorDefinitionIdentifier const&>(a3), std::forward<bool>(a4), std::forward<bool>(a5));
}

inline void handleStopAllSounds() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?handleStopAllSounds@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void handleStopSoundEvent(std::string const& a0) {
    void (Level::*rv)(std::string const&);
    *((void**)&rv) = dlsym("?handleStopSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0));
}

inline bool hasCommandsEnabled() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasCommandsEnabled@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasLevelStorage() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasLevelStorage@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasPlatformBroadcast() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasPlatformBroadcast@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasPlatformBroadcastIntent() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasPlatformBroadcastIntent@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasStartWithMapEnabled() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasStartWithMapEnabled@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasXBLBroadcast() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasXBLBroadcast@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool hasXBLBroadcastIntent() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?hasXBLBroadcastIntent@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline void incrementSpawnableTickedMob() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?incrementSpawnableTickedMob@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void incrementTagCache(std::string const& a0, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& a1) {
    void (Level::*rv)(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);
    *((void**)&rv) = dlsym("?incrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&>(a1));
}

inline bool initialize(std::string const& a0, class LevelSettings const& a1, class LevelData* a2, class Experiments const& a3, std::string const* a4) {
    bool (Level::*rv)(std::string const&, class LevelSettings const&, class LevelData*, class Experiments const&, std::string const*);
    *((void**)&rv) = dlsym("?initialize@Level@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class LevelSettings const&>(a1), std::forward<class LevelData*>(a2), std::forward<class Experiments const&>(a3), std::forward<std::string const*>(a4));
}

inline void initializeBlockDefinitionGroup() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?initializeBlockDefinitionGroup@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline bool isClientSide() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?isClientSide@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool isEdu() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?isEdu@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool isExporting() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?isExporting@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool isLeaveGameDone() {
    bool (Level::*rv)();
    *((void**)&rv) = dlsym("?isLeaveGameDone@Level@@UEAA_NXZ");
    return (this->*rv)();
}

inline bool isMultiplayerGame() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?isMultiplayerGame@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline bool isPlayerSuspended(class Player& a0) const {
    bool (Level::*rv)(class Player&) const;
    *((void**)&rv) = dlsym("?isPlayerSuspended@Level@@UEBA_NAEAVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0));
}

inline void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits> a0, bool a1) {
    void (Level::*rv)(class OwnerPtrT<struct EntityRefTraits>, bool);
    *((void**)&rv) = dlsym("?levelCleanupQueueEntityRemoval@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z");
    return (this->*rv)(std::forward<class OwnerPtrT<struct EntityRefTraits>>(a0), std::forward<bool>(a1));
}

inline void loadBlockDefinitionGroup(class Experiments const& a0) {
    void (Level::*rv)(class Experiments const&);
    *((void**)&rv) = dlsym("?loadBlockDefinitionGroup@Level@@UEAAXAEBVExperiments@@@Z");
    return (this->*rv)(std::forward<class Experiments const&>(a0));
}

inline void loadFunctionManager() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?loadFunctionManager@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void notifySubChunkRequestManager(class SubChunkPacket const& a0) {
    void (Level::*rv)(class SubChunkPacket const&);
    *((void**)&rv) = dlsym("?notifySubChunkRequestManager@Level@@UEAAXAEBVSubChunkPacket@@@Z");
    return (this->*rv)(std::forward<class SubChunkPacket const&>(a0));
}

inline void onChunkDiscarded(class LevelChunk& a0) {
    void (Level::*rv)(class LevelChunk&);
    *((void**)&rv) = dlsym("?onChunkDiscarded@Level@@UEAAXAEAVLevelChunk@@@Z");
    return (this->*rv)(std::forward<class LevelChunk&>(a0));
}

inline void onChunkLoaded(class ChunkSource& a0, class LevelChunk& a1) {
    void (Level::*rv)(class ChunkSource&, class LevelChunk&);
    *((void**)&rv) = dlsym("?onChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
    return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1));
}

inline void onChunkReload(struct Bounds const& a0) {
    void (Level::*rv)(struct Bounds const&);
    *((void**)&rv) = dlsym("?onChunkReload@Level@@UEAAXAEBUBounds@@@Z");
    return (this->*rv)(std::forward<struct Bounds const&>(a0));
}

inline void onPlayerDeath(class Player& a0, class ActorDamageSource const& a1) {
    void (Level::*rv)(class Player&, class ActorDamageSource const&);
    *((void**)&rv) = dlsym("?onPlayerDeath@Level@@UEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0), std::forward<class ActorDamageSource const&>(a1));
}

inline void onSourceCreated(class BlockSource& a0) {
    void (Level::*rv)(class BlockSource&);
    *((void**)&rv) = dlsym("?onSourceCreated@Level@@UEAAXAEAVBlockSource@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0));
}

inline void onSourceDestroyed(class BlockSource& a0) {
    void (Level::*rv)(class BlockSource&);
    *((void**)&rv) = dlsym("?onSourceDestroyed@Level@@UEAAXAEAVBlockSource@@@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0));
}

inline void onSubChunkLoaded(class ChunkSource& a0, class LevelChunk& a1, short a2) {
    void (Level::*rv)(class ChunkSource&, class LevelChunk&, short);
    *((void**)&rv) = dlsym("?onSubChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F@Z");
    return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1), std::forward<short>(a2));
}

inline void playSound(int /*enum LevelSoundEvent/ a0, class Vec3 const& a1, int a2, struct ActorDefinitionIdentifier const& a3, bool a4, bool a5) {
    void (Level::*rv)(int /*enum LevelSoundEvent/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z");
    return (this->*rv)(std::forward<int /*enum LevelSoundEvent/>(a0), std::forward<class Vec3 const&>(a1), std::forward<int>(a2), std::forward<struct ActorDefinitionIdentifier const&>(a3), std::forward<bool>(a4), std::forward<bool>(a5));
}

inline void playSound(class BlockSource& a0, int /*enum LevelSoundEvent/ a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelSoundEvent/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?playSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelSoundEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3), std::forward<struct ActorDefinitionIdentifier const&>(a4), std::forward<bool>(a5), std::forward<bool>(a6));
}

inline void playSound(int /*enum LevelSoundEvent/ a0, class Vec3 const& a1, float a2, float a3) {
    void (Level::*rv)(int /*enum LevelSoundEvent/, class Vec3 const&, float, float);
    *((void**)&rv) = dlsym("?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@MM@Z");
    return (this->*rv)(std::forward<int /*enum LevelSoundEvent/>(a0), std::forward<class Vec3 const&>(a1), std::forward<float>(a2), std::forward<float>(a3));
}

inline void playSynchronizedSound(class BlockSource& a0, int /*enum LevelSoundEvent/ a1, class Vec3 const& a2, class Block const& a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelSoundEvent/, class Vec3 const&, class Block const&, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?playSynchronizedSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelSoundEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<class Block const&>(a3), std::forward<struct ActorDefinitionIdentifier const&>(a4), std::forward<bool>(a5), std::forward<bool>(a6));
}

inline void playSynchronizedSound(class BlockSource& a0, int /*enum LevelSoundEvent/ a1, class Vec3 const& a2, int a3, struct ActorDefinitionIdentifier const& a4, bool a5, bool a6) {
    void (Level::*rv)(class BlockSource&, int /*enum LevelSoundEvent/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    *((void**)&rv) = dlsym("?playSynchronizedSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z");
    return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int /*enum LevelSoundEvent/>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3), std::forward<struct ActorDefinitionIdentifier const&>(a4), std::forward<bool>(a5), std::forward<bool>(a6));
}

inline bool postProcessResources() {
    bool (Level::*rv)();
    *((void**)&rv) = dlsym("?postProcessResources@Level@@UEAA_NXZ");
    return (this->*rv)();
}

inline void potionSplash(class Vec3 const& a0, class mce::Color const& a1, bool a2) {
    void (Level::*rv)(class Vec3 const&, class mce::Color const&, bool);
    *((void**)&rv) = dlsym("?potionSplash@Level@@UEAAXAEBVVec3@@AEBVColor@mce@@_N@Z");
    return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<class mce::Color const&>(a1), std::forward<bool>(a2));
}

inline void pruneChunkViewTrackers() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?pruneChunkViewTrackers@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits> a0, bool a1) {
    void (Level::*rv)(class OwnerPtrT<struct EntityRefTraits>, bool);
    *((void**)&rv) = dlsym("?queueEntityDestruction@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z");
    return (this->*rv)(std::forward<class OwnerPtrT<struct EntityRefTraits>>(a0), std::forward<bool>(a1));
}

inline void registerEntity(class OwnerPtrT<struct EntityRefTraits> a0) {
    void (Level::*rv)(class OwnerPtrT<struct EntityRefTraits>);
    *((void**)&rv) = dlsym("?registerEntity@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z");
    return (this->*rv)(std::forward<class OwnerPtrT<struct EntityRefTraits>>(a0));
}

inline void registerTemporaryPointer(class _TickPtr& a0) {
    void (Level::*rv)(class _TickPtr&);
    *((void**)&rv) = dlsym("?registerTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z");
    return (this->*rv)(std::forward<class _TickPtr&>(a0));
}

inline class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef a0) {
    class OwnerPtrT<struct EntityRefTraits> (Level::*rv)(class WeakEntityRef);
    *((void**)&rv) = dlsym("?removeActorAndTakeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z");
    return (this->*rv)(std::forward<class WeakEntityRef>(a0));
}

inline void
    removeAllNonPlayerEntities(struct ActorUniqueID a0) {
    void (Level::*rv)(struct ActorUniqueID);
    *((void**)&rv) = dlsym("?removeAllNonPlayerEntities@Level@@UEAAXUActorUniqueID@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0));
}

inline void removeAutonomousEntity(class Actor& a0, class LevelChunk* a1) {
    void (Level::*rv)(class Actor&, class LevelChunk*);
    *((void**)&rv) = dlsym("?removeAutonomousEntity@Level@@UEAAXAEAVActor@@PEAVLevelChunk@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class LevelChunk*>(a1));
}

inline void removeBossEventListener(class BossEventListener* a0) {
    void (Level::*rv)(class BossEventListener*);
    *((void**)&rv) = dlsym("?removeBossEventListener@Level@@UEAAXPEAVBossEventListener@@@Z");
    return (this->*rv)(std::forward<class BossEventListener*>(a0));
}

inline void removeDisplayEntity(class WeakEntityRef a0) {
    void (Level::*rv)(class WeakEntityRef);
    *((void**)&rv) = dlsym("?removeDisplayEntity@Level@@UEAAXVWeakEntityRef@@@Z");
    return (this->*rv)(std::forward<class WeakEntityRef>(a0));
}

inline class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor& a0) {
    class OwnerPtrT<struct EntityRefTraits> (Level::*rv)(class Actor&);
    *((void**)&rv) = dlsym("?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEAVActor@@@Z");
    return (this->*rv)(std::forward<class Actor&>(a0));
}

inline class OwnerPtrT<struct EntityRefTraits>
    removeEntity(class WeakEntityRef a0) {
    class OwnerPtrT<struct EntityRefTraits> (Level::*rv)(class WeakEntityRef);
    *((void**)&rv) = dlsym("?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z");
    return (this->*rv)(std::forward<class WeakEntityRef>(a0));
}

inline bool
    removeEntityIfExists(class Actor* a0) {
    bool (Level::*rv)(class Actor*);
    *((void**)&rv) = dlsym("?removeEntityIfExists@Level@@UEAA_NPEAVActor@@@Z");
    return (this->*rv)(std::forward<class Actor*>(a0));
}

inline void removeEntityReferences(class Actor& a0, bool a1) {
    void (Level::*rv)(class Actor&, bool);
    *((void**)&rv) = dlsym("?removeEntityReferences@Level@@UEAAXAEAVActor@@_N@Z");
    return (this->*rv)(std::forward<class Actor&>(a0), std::forward<bool>(a1));
}

inline void removeListener(class LevelListener& a0) {
    void (Level::*rv)(class LevelListener&);
    *((void**)&rv) = dlsym("?removeListener@Level@@UEAAXAEAVLevelListener@@@Z");
    return (this->*rv)(std::forward<class LevelListener&>(a0));
}

inline void requestMapInfo(struct ActorUniqueID a0, bool a1) {
    void (Level::*rv)(struct ActorUniqueID, bool);
    *((void**)&rv) = dlsym("?requestMapInfo@Level@@UEAAXUActorUniqueID@@_N@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID>(a0), std::forward<bool>(a1));
}

inline void requestPlayerChangeDimension(class Player& a0, std::unique_ptr<class ChangeDimensionRequest> a1) {
    void (Level::*rv)(class Player&, std::unique_ptr<class ChangeDimensionRequest>);
    *((void**)&rv) = dlsym("?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0), std::forward<std::unique_ptr<class ChangeDimensionRequest>>(a1));
}

inline class Bedrock::Threading::CountReference requestTimedStorageDeferment() {
    class Bedrock::Threading::CountReference (Level::*rv)();
    *((void**)&rv) = dlsym("?requestTimedStorageDeferment@Level@@UEAA?AVCountReference@Threading@Bedrock@@XZ");
    return (this->*rv)();
}

inline void resumePlayer(class Player& a0) {
    void (Level::*rv)(class Player&);
    *((void**)&rv) = dlsym("?resumePlayer@Level@@UEAAXAEAVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0));
}

inline void runCommand(class Command& a0, class CommandOrigin& a1, int /*enum CommandOriginSystem/ a2) {
    void (Level::*rv)(class Command&, class CommandOrigin&, int /*enum CommandOriginSystem/);
    *((void**)&rv) = dlsym("?runCommand@Level@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z");
    return (this->*rv)(std::forward<class Command&>(a0), std::forward<class CommandOrigin&>(a1), std::forward<int /*enum CommandOriginSystem/>(a2));
}

inline void runCommand(class HashedString const& a0, class CommandOrigin& a1, int /*enum CommandOriginSystem/ a2, int /*enum CurrentCmdVersion/ a3) {
    void (Level::*rv)(class HashedString const&, class CommandOrigin&, int /*enum CommandOriginSystem/, int /*enum CurrentCmdVersion/);
    *((void**)&rv) = dlsym("?runCommand@Level@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z");
    return (this->*rv)(std::forward<class HashedString const&>(a0), std::forward<class CommandOrigin&>(a1), std::forward<int /*enum CommandOriginSystem/>(a2), std::forward<int /*enum CurrentCmdVersion/>(a3));
}

inline void save() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?save@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveAdditionalData() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveAdditionalData@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveBiomeData() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveBiomeData@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveDirtyChunks() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveDirtyChunks@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveEducationLevelSettings() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveEducationLevelSettings@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveGameData() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveGameData@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveLevelData() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveLevelData@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void savePlayer(class Player& a0) {
    void (Level::*rv)(class Player&);
    *((void**)&rv) = dlsym("?savePlayer@Level@@UEAAXAEAVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0));
}

inline void savePlayers() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?savePlayers@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void saveVillages() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?saveVillages@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void sendAllPlayerAbilities(class Player const& a0) {
    void (Level::*rv)(class Player const&);
    *((void**)&rv) = dlsym("?sendAllPlayerAbilities@Level@@UEAAXAEBVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player const&>(a0));
}

inline void sendServerLegacyParticle(int /*enum ParticleType/ a0, class Vec3 const& a1, class Vec3 const& a2, int a3) {
    void (Level::*rv)(int /*enum ParticleType/, class Vec3 const&, class Vec3 const&, int);
    *((void**)&rv) = dlsym("?sendServerLegacyParticle@Level@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z");
    return (this->*rv)(std::forward<int /*enum ParticleType/>(a0), std::forward<class Vec3 const&>(a1), std::forward<class Vec3 const&>(a2), std::forward<int>(a3));
}

inline void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class ActorEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setActorEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VActorEventCoordinator@@U?$default_delete@VActorEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class ActorEventCoordinator>&&>(a0));
}

inline void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class BlockEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setBlockEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VBlockEventCoordinator@@U?$default_delete@VBlockEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class BlockEventCoordinator>&&>(a0));
}

inline void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class ClientPlayerEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setClientPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VClientPlayerEventCoordinator@@U?$default_delete@VClientPlayerEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class ClientPlayerEventCoordinator>&&>(a0));
}

inline void setCommandsEnabled(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setCommandsEnabled@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setDefaultGameType(int /*enum GameType/ a0) {
    void (Level::*rv)(int /*enum GameType/);
    *((void**)&rv) = dlsym("?setDefaultGameType@Level@@UEAAXW4GameType@@@Z");
    return (this->*rv)(std::forward<int /*enum GameType/>(a0));
}

inline void setDefaultSpawn(class BlockPos const& a0) {
    void (Level::*rv)(class BlockPos const&);
    *((void**)&rv) = dlsym("?setDefaultSpawn@Level@@UEAAXAEBVBlockPos@@@Z");
    return (this->*rv)(std::forward<class BlockPos const&>(a0));
}

inline void setDifficulty(int /*enum Difficulty/ a0) {
    void (Level::*rv)(int /*enum Difficulty/);
    *((void**)&rv) = dlsym("?setDifficulty@Level@@UEAAXW4Difficulty@@@Z");
    return (this->*rv)(std::forward<int /*enum Difficulty/>(a0));
}

inline void setEducationLevelSettings(struct EducationLevelSettings a0) {
    void (Level::*rv)(struct EducationLevelSettings);
    *((void**)&rv) = dlsym("?setEducationLevelSettings@Level@@UEAAXUEducationLevelSettings@@@Z");
    return (this->*rv)(std::forward<struct EducationLevelSettings>(a0));
}

inline void setFinishedInitializing() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?setFinishedInitializing@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void setHasLockedBehaviorPack(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setHasLockedBehaviorPack@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setHasLockedResourcePack(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setHasLockedResourcePack@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setImmersiveReaderString(std::string a0) {
    void (Level::*rv)(std::string);
    *((void**)&rv) = dlsym("?setImmersiveReaderString@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string>(a0));
}

inline void setIsExporting(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setIsExporting@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class ItemEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setItemEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VItemEventCoordinator@@U?$default_delete@VItemEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class ItemEventCoordinator>&&>(a0));
}

inline void setLANBroadcast(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setLANBroadcast@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setLANBroadcastIntent(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setLANBroadcastIntent@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setLevelId(std::string a0) {
    void (Level::*rv)(std::string);
    *((void**)&rv) = dlsym("?setLevelId@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    return (this->*rv)(std::forward<std::string>(a0));
}

inline void setMsaGamertagsOnly(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setMsaGamertagsOnly@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setMultiplayerGame(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setMultiplayerGame@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setMultiplayerGameIntent(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setMultiplayerGameIntent@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setNetEventCallback(class NetEventCallback* a0) {
    void (Level::*rv)(class NetEventCallback*);
    *((void**)&rv) = dlsym("?setNetEventCallback@Level@@UEAAXPEAVNetEventCallback@@@Z");
    return (this->*rv)(std::forward<class NetEventCallback*>(a0));
}

inline void setPacketSender(class PacketSender* a0) {
    void (Level::*rv)(class PacketSender*);
    *((void**)&rv) = dlsym("?setPacketSender@Level@@UEAAXPEAVPacketSender@@@Z");
    return (this->*rv)(std::forward<class PacketSender*>(a0));
}

inline void setPlatformBroadcastIntent(int /*enum Social::GamePublishSetting/ a0) {
    void (Level::*rv)(int /*enum Social::GamePublishSetting/);
    *((void**)&rv) = dlsym("?setPlatformBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z");
    return (this->*rv)(std::forward<int /*enum Social::GamePublishSetting/>(a0));
}

inline void setPlatformBroadcastMode(int /*enum Social::GamePublishSetting/ a0) {
    void (Level::*rv)(int /*enum Social::GamePublishSetting/);
    *((void**)&rv) = dlsym("?setPlatformBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z");
    return (this->*rv)(std::forward<int /*enum Social::GamePublishSetting/>(a0));
}

inline void setPlayerAbilities(struct ActorUniqueID const& a0, class Abilities a1) {
    void (Level::*rv)(struct ActorUniqueID const&, class Abilities);
    *((void**)&rv) = dlsym("?setPlayerAbilities@Level@@UEAAXAEBUActorUniqueID@@VAbilities@@@Z");
    return (this->*rv)(std::forward<struct ActorUniqueID const&>(a0), std::forward<class Abilities>(a1));
}

inline void setPlayerMovementSettings(struct PlayerMovementSettings const& a0) {
    void (Level::*rv)(struct PlayerMovementSettings const&);
    *((void**)&rv) = dlsym("?setPlayerMovementSettings@Level@@UEAAXAEBUPlayerMovementSettings@@@Z");
    return (this->*rv)(std::forward<struct PlayerMovementSettings const&>(a0));
}

inline void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class PlayerEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setRemotePlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VPlayerEventCoordinator@@U?$default_delete@VPlayerEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class PlayerEventCoordinator>&&>(a0));
}

inline void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class ServerNetworkEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setServerNetworkEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerNetworkEventCoordinator@@U?$default_delete@VServerNetworkEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class ServerNetworkEventCoordinator>&&>(a0));
}

inline void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator>&& a0) {
    void (Level::*rv)(std::unique_ptr<class ServerPlayerEventCoordinator> &&);
    *((void**)&rv) = dlsym("?setServerPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerPlayerEventCoordinator@@U?$default_delete@VServerPlayerEventCoordinator@@@std@@@std@@@Z");
    return (this->*rv)(std::forward<std::unique_ptr<class ServerPlayerEventCoordinator>&&>(a0));
}

inline void setSimPaused(bool a0) {
    void (Level::*rv)(bool);
    *((void**)&rv) = dlsym("?setSimPaused@Level@@UEAAX_N@Z");
    return (this->*rv)(std::forward<bool>(a0));
}

inline void setSpawnSettings(struct SpawnSettings const& a0) {
    void (Level::*rv)(struct SpawnSettings const&);
    *((void**)&rv) = dlsym("?setSpawnSettings@Level@@UEAAXAEBUSpawnSettings@@@Z");
    return (this->*rv)(std::forward<struct SpawnSettings const&>(a0));
}

inline void setTime(int a0) {
    void (Level::*rv)(int);
    *((void**)&rv) = dlsym("?setTime@Level@@UEAAXH@Z");
    return (this->*rv)(std::forward<int>(a0));
}

inline void setWorldTemplateOptionsUnlocked() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?setWorldTemplateOptionsUnlocked@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void setXBLBroadcastIntent(int /*enum Social::GamePublishSetting/ a0) {
    void (Level::*rv)(int /*enum Social::GamePublishSetting/);
    *((void**)&rv) = dlsym("?setXBLBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z");
    return (this->*rv)(std::forward<int /*enum Social::GamePublishSetting/>(a0));
}

inline void setXBLBroadcastMode(int /*enum Social::GamePublishSetting/ a0) {
    void (Level::*rv)(int /*enum Social::GamePublishSetting/);
    *((void**)&rv) = dlsym("?setXBLBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z");
    return (this->*rv)(std::forward<int /*enum Social::GamePublishSetting/>(a0));
}

inline void spawnParticleEffect(std::string const& a0, class Actor const& a1, class Vec3 const& a2) {
    void (Level::*rv)(std::string const&, class Actor const&, class Vec3 const&);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@AEBVVec3@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class Actor const&>(a1), std::forward<class Vec3 const&>(a2));
}

inline void spawnParticleEffect(std::string const& a0, class Vec3 const& a1, class Dimension* a2) {
    void (Level::*rv)(std::string const&, class Vec3 const&, class Dimension*);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z");
    return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<class Dimension*>(a2));
}

inline void startLeaveGame() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?startLeaveGame@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void suspendAndSave() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?suspendAndSave@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void suspendPlayer(class Player& a0) {
    void (Level::*rv)(class Player&);
    *((void**)&rv) = dlsym("?suspendPlayer@Level@@UEAAXAEAVPlayer@@@Z");
    return (this->*rv)(std::forward<class Player&>(a0));
}

inline class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef a0, class LevelChunk* a1) {
    class OwnerPtrT<struct EntityRefTraits> (Level::*rv)(class WeakEntityRef, class LevelChunk*);
    *((void**)&rv) = dlsym("?takeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@PEAVLevelChunk@@@Z");
    return (this->*rv)(std::forward<class WeakEntityRef>(a0), std::forward<class LevelChunk*>(a1));
}

inline void
    takePicture(class cg::ImageBuffer& a0, class Actor* a1, class Actor* a2, struct ScreenshotOptions& a3) {
    void (Level::*rv)(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);
    *((void**)&rv) = dlsym("?takePicture@Level@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z");
    return (this->*rv)(std::forward<class cg::ImageBuffer&>(a0), std::forward<class Actor*>(a1), std::forward<class Actor*>(a2), std::forward<struct ScreenshotOptions&>(a3));
}

inline void tick() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?tick@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void tickEntities() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?tickEntities@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void tickEntitySystems() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?tickEntitySystems@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void unregisterTemporaryPointer(class _TickPtr& a0) {
    void (Level::*rv)(class _TickPtr&);
    *((void**)&rv) = dlsym("?unregisterTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z");
    return (this->*rv)(std::forward<class _TickPtr&>(a0));
}

inline void updateSleepingPlayerList() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?updateSleepingPlayerList@Level@@UEAAXXZ");
    return (this->*rv)();
}

inline void updateWeather(float a0, int a1, float a2, int a3) {
    void (Level::*rv)(float, int, float, int);
    *((void**)&rv) = dlsym("?updateWeather@Level@@UEAAXMHMH@Z");
    return (this->*rv)(std::forward<float>(a0), std::forward<int>(a1), std::forward<float>(a2), std::forward<int>(a3));
}

inline void upgradeStorageVersion(int /*enum StorageVersion/ a0) {
    void (Level::*rv)(int /*enum StorageVersion/);
    *((void**)&rv) = dlsym("?upgradeStorageVersion@Level@@UEAAXW4StorageVersion@@@Z");
    return (this->*rv)(std::forward<int /*enum StorageVersion/>(a0));
}

inline bool useMsaGamertagsOnly() const {
    bool (Level::*rv)() const;
    *((void**)&rv) = dlsym("?useMsaGamertagsOnly@Level@@UEBA_NXZ");
    return (this->*rv)();
}

inline void waitAsyncSuspendWork() {
    void (Level::*rv)();
    *((void**)&rv) = dlsym("?waitAsyncSuspendWork@Level@@UEAAXXZ");
    return (this->*rv)();
}
*/

#endif
