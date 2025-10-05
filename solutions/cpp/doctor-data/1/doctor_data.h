#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>



namespace star_map {
    enum class System {
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani    
    };  // Добавлена точка с запятой
}


namespace heaven {
    class Vessel {
    public:
        std::string name{};
        int generation{};
        star_map::System current_system{};
        int busters{0};
        Vessel(std::string name, int generation);
        Vessel(std::string name, int generation, star_map::System system);

        heaven::Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();
    };


    std::string get_older_bob(heaven::Vessel obj1, heaven::Vessel obj2);
    bool in_the_same_system(heaven::Vessel obj1, heaven::Vessel obj2);
}

#endif

