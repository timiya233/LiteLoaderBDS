#pragma once
template<class T>
requires std::is_base_of<BlockLegacy, T>::value
class CustomBlock : public T {
public:
	
	CustomBlock(std::string const& name, int id, class Material const& material) : T(name, id, material){};

	void build() {
        this->setDestroyTime(getDestroyTime());
        this->setExplodeable(getExplodeable());
        this->setCategory(getCategory());
        this->setCreativeEnumState(getCreativeEnumState());
        this->initializeBlockStateGroup();
	}

	virtual float getDestroyTime() const = 0;
    virtual float getExplodeable() const = 0;
    virtual CreativeItemCategory getCategory() const = 0;
    virtual ItemState& getCreativeEnumState() const = 0;

};

