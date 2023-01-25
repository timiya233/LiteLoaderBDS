#pragma once
 #include <iostream>
 #include "llapi/mc/ItemInstance.hpp"
 #include "llapi/mc/Recipes.hpp"
 #include "llapi/mc/ShapedRecipe.hpp"
 #include "llapi/mc/ShapelessRecipe.hpp"

class CustomShapedRecipe {
public:
    virtual ItemInstance getResult() = 0;
    virtual std::vector<std::string> getRows() = 0;
    virtual std::vector<Recipes::Type> getTypes() = 0;
    virtual std::vector<HashedString> getTags() = 0;
    virtual int getPriority() = 0;
    virtual std::function<std::unique_ptr<ShapedRecipe>(std::string, int, int, std::vector<RecipeIngredient> const&,
                                                        std::vector<ItemInstance> const&, HashedString)>
        getConstructor() {
        return nullptr;
    }
};

class CustomShapelessRecipe {
public:
    virtual ItemInstance getResult() = 0;
    virtual std::vector<Recipes::Type> getTypes() = 0;
    virtual std::vector<HashedString> getTags() = 0;
    virtual int getPriority() = 0;

    virtual std::function<
        std::unique_ptr<ShapelessRecipe>(std::string, std::vector<RecipeIngredient> const&,
                                               std::vector<ItemInstance> const&, HashedString)>
        getConstructor() {
        return nullptr;
    }
};

class CustomFurnaceRecipe {
public:
    virtual ItemInstance getInput() = 0;
    virtual ItemInstance getResult() = 0;
    virtual std::vector<HashedString> getTags() = 0;
};