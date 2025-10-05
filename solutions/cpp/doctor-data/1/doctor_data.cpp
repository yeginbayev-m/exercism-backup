#include "doctor_data.h"

namespace heaven {

        Vessel::Vessel(std::string name, int generation) : name(name), generation(generation), current_system(star_map::System::Sol) {}

        Vessel::Vessel(std::string name, int generation, star_map::System system) : name(name), generation(generation), current_system(system) {}

    
    
       Vessel Vessel::replicate (std::string name) {

            return Vessel(name, this->generation + 1, this->current_system);
        }

        void Vessel::make_buster() {
            busters++;
        }

        bool Vessel::shoot_buster() {
            if (busters > 0) {
                busters --;
                return true;
            }
            return false;
        }
        

    std::string get_older_bob(heaven::Vessel obj1, heaven::Vessel obj2) {
        if (obj1.generation < obj2.generation) {
            return obj1.name;
        }
        else {
            return obj2.name;
        }
    }


    bool in_the_same_system(heaven::Vessel obj1, heaven::Vessel obj2) {
        if (obj1.current_system == obj2.current_system) {
            return true;
        }
        return false;
    }
}  