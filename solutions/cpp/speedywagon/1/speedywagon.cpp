#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}
    bool uv_alarm(pillar_men_sensor* sensor) {
        if (sensor == nullptr) {return false;}
        int uv_index = uv_light_heuristic(&sensor->data);
        if (uv_index > sensor->activity) {
            return true;
        } else {
            return false;
        }
    }

    bool connection_check(pillar_men_sensor* ptr) {
        return ptr != nullptr;
    }

    int activity_counter(pillar_men_sensor* sensor_array, int capacity) {
        int total = 0;
        for (int i = 0; i < capacity; ++i) {
            total = total + (sensor_array + i)->activity;
        }
        return total;
    }

    bool alarm_control(pillar_men_sensor* ptr) {
        
            if (ptr != nullptr && ptr->activity > 0) {
                return true;
            } else return false;
        
    }

    

}  // namespace speedywagon
