#include <superkarel.h>

int speed = 250;
void turn_right();
void pick_all();
int count_beepers();
void put_beepers(int num);
void multiple();

int main () {
    turn_on("multiplier.kw");
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
        if (beepers_present()) {
            multiple();
        }
        if (front_is_blocked()) {
            if (facing_east()) {
                    turn_left();
                if (front_is_clear()) {
                    //multiple();
                    step();
                    multiple();
                    turn_left();
                    step();
                    //multiple();
                } else {
                    break;
                }
            }

            if (facing_west() && front_is_blocked()) {
                turn_right();
                if (front_is_clear()) {
                    //multiple();
                    step();
                    multiple();
                    turn_right();
                    step();
                    //multiple();
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

int count_beepers () {
    int i = 0;
    while (beepers_present()) {
        pick_beeper();
        i++;
    }

    for (int j = 0; j < i; j++) {
        put_beeper();
    }
    return i;
}

void put_beepers(int num) {
    for (int x = 0; x < num; x++) {
        put_beeper();
    }
}

void multiple() {
    int bp = count_beepers();
    put_beepers(bp);
}
