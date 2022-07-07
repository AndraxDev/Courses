#include <superkarel.h>

int speed = 250;

void turn_right();

int main() {
    turn_on("road2.kw");
    set_step_delay(speed);
    while (front_is_clear()) {
        while (right_is_blocked()) {
            step();
        }
        turn_right();
        while (front_is_clear()) {
            step();
        }
        if (no_beepers_present()) {
            put_beeper();
        }
        turn_left();
        turn_left();
        while (right_is_blocked() && front_is_clear()) {
            step();
        }
        turn_right();
        if (front_is_clear()) {
            step();
        }
    }
    turn_off();
    return 0;
}

void turn_right() {
    set_step_delay(0);
    for (int i = 0; i <= 2; i++) {
        turn_left();
    }
    set_step_delay(speed);
}
