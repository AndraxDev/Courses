/*********************************
 * WEEK 2 | Robot Karel | Stairs *
 *********************************/

#include <karel.h>

void turn_right();
int main() {
    set_step_delay(200);
    turn_on("stairs3.kw");
    // TODO

    while (true) {
        if (beepers_present()) {
            set_step_delay(50);
            pick_beeper();
            set_step_delay(250);
        } else {
            if (front_is_clear()) {
                turn_right();

                if (front_is_clear()) {
                    // turn_();
                    turn_left();
                    // step();
                    break;
                } else {
                    turn_left();
                    if (front_is_clear()) {
                        step();
                    }
                }
            } else {
                turn_left();
                step();
                turn_right();
                if (front_is_clear()) {
                    step();
                }
            }
        }
    }
    
    turn_left();
    turn_left();
    step();
    turn_left();
    turn_left();
    while(beepers_in_bag()) {
        set_step_delay(50);
        put_beeper();
        set_step_delay(250);
    }
    turn_off();
    return 0;
}

void turn_right() {
    set_step_delay(0);
    for (int i = 0; i <= 2; i++) {
        turn_left();
    }
    set_step_delay(250);
}
