namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {

        public:
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int x_coordinate;
        int y_coordinate;
        int get_health() {
            return this->health;
        }
        bool hit() {
            if (this->health > 0) {
                this->health--;
            }
            return true;
        }

        bool is_alive() {
            if (health <= 0) {
                return false;
            } else {
                return true;
            }
        }
        bool teleport(int x_new, int y_new){
            this->x_coordinate = x_new;
            this->y_coordinate = y_new;
            return true;
        }
        bool collision_detection(Alien obj) {
            if (this->x_coordinate == obj.x_coordinate && this->y_coordinate == obj.y_coordinate) {
                return true;
            } else return false;
        }

        private:
        int health = 3;

        
    };
}  // namespace targets
