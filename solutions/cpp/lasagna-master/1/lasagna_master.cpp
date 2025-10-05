#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> basis, int avg_prep_time) {
        return basis.size() * avg_prep_time;
    }

    amount quantities(std::vector<std::string> basis) {
        int amount_sauce{0};
        int amount_noodles{0};
        int vector_size = static_cast<int>(basis.size());
        for (int i = 0; i < vector_size; i++) {
            if (basis[i] == "sauce") {
                amount_sauce++;
            } else if (basis[i] == "noodles") {
                amount_noodles++;
            }
        }

    amount needed;
        needed.sauce = amount_sauce * 0.2;
        needed.noodles = amount_noodles * 50;
        return needed;
    }

    void addSecretIngredient(std::vector<std::string>& own_recipe, const std::vector<std::string>& friends_recipe) {

        if (!own_recipe.empty() && !friends_recipe.empty()) {

        if (own_recipe.back() == "?") {
            own_recipe.back() = friends_recipe.back();
        }
        }
    }

   void addSecretIngredient(std::vector<std::string>& list, std::string ingredient) {
        if (!list.empty()) {
        if (list.back() == "?") {
            list.back() = ingredient;
        }
        }
    }

    std::vector<double> scaleRecipe(const std::vector<double>& base_recipe, int batch_size) {

        double servings_portions = batch_size / 2.0;
        std::vector<double> batched_recipe;
        int vector_size = static_cast<int>(base_recipe.size());
        for (int i = 0; i < vector_size; i++) {
            batched_recipe.push_back(base_recipe[i] * servings_portions);
        }
        return batched_recipe;
    }

}  // namespace lasagna_master
