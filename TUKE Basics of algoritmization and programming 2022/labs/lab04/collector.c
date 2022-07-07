#include <superkarel.h>

int speed = 250;
void turn_right();
void pick_all();

int main () {
    turn_on("collector2.kw");
    set_step_delay(speed);
    
    /* ROBOT CALIBRATION STARTS */
    while (!facing_south()) {
        turn_left();
    }

    while (front_is_clear()) {
        step();
    }

    while (!facing_west()) {
        turn_left();
    }

    while (front_is_clear()) {
        step();
    }

    while (!facing_east()) {
        turn_left();
    }
    /* ROBOT CALIBRATION ENDS */

    while (true) {
        while (beepers_present()) {
            pick_beeper();
        }
        if (front_is_blocked()) {
            if (facing_east()) {
                    turn_left();
                if (front_is_clear()) {
                    pick_all();
                    step();
                    pick_all();
                    turn_left();
                    step();
                    pick_all();
                } else {
                    break;
                }
            }

            if (facing_west() && front_is_blocked()) {
                turn_right();
                if (front_is_clear()) {
                    pick_all();
                    step();
                    pick_all();
                    turn_right();
                    step();
                    pick_all();
                } else {
                    break;
                }
            }
        } else {
            step();
        }
    }

    turn_off();
    return 0;
}

void turn_right() {
    set_step_delay(0);
    turn_left();
    turn_left();
    set_step_delay(speed);
    turn_left();
}

void pick_all() {
    while (beepers_present()) {
        pick_beeper();
    }
}
