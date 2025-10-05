#include "power_of_troy.h"
#include <utility>

namespace troy {

    
        void give_new_artifact(human& person, const std::string& new_artifact) {
        person.possession = std::make_unique<artifact>(new_artifact);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& object1, std::unique_ptr<artifact>& object2) {
    std::swap(object1, object2);
    }

    void manifest_power(human& person, const std::string& new_power) {
        person.own_power = std::make_unique<power>(new_power);
    }

    void use_power(human& caster, human& target) {
        target.influenced_by = caster.own_power;
    }

    int power_intensity(const human& person) {
        if (person.own_power == nullptr) {
            return 0;
        }

        return static_cast<int>(person.own_power.use_count());
        
    }
}  // namespace troy
