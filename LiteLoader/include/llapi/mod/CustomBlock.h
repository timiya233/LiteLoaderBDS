#pragma once
template<class T>
requires std::is_base_of<BlockLegacy, T>::value
class CustomBlock : public T {
public:
	
    template <typename... Args>
    CustomBlock(Args&&... args) : T(args...){};

	void build() {
        this->setDestroyTime(getDestroyTime());
        this->setExplodeable(getExplodeable());
        this->mFriction = getFrictionFactor();
	}

	virtual float getDestroyTime() const = 0;
    virtual float getExplodeable() const = 0;

	virtual float getFrictionFactor() {
        return 0;
	}

};

