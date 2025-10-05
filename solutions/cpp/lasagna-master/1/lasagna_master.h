#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(std::vector<std::string> basis, int avg_prep_time = 2);
    amount quantities(std::vector<std::string> basis);

    void addSecretIngredient(std::vector<std::string>& own_recipe, const std::vector<std::string>& friends_recipe);

    void addSecretIngredient(std::vector<std::string>& list, std::string ingredient);

        std::vector<double> scaleRecipe(const std::vector<double>& base_recipe, int batch_size);
}  // namespace lasagna_master
