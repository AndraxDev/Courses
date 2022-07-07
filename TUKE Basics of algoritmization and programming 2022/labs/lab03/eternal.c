#include <superkarel.h>

int speed = 250;

int main() {
    turn_on("empty.kw");
    set_step_delay(speed);
    
    while (not_facing_north()) {
        turn_left();
    }
    
    while (true) {
        while (front_is_clear()) {
            step();
        }
        turn_left();
        turn_left();
    }

    turn_off();
    return 0;
}
