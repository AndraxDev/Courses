#include <superkarel.h>

void turn_right();

int speed = 250;
void run_top();
void run_bottom();

int main() {
    turn_on("highway4.kw");
    // Calibration
    speed = 0;
    set_step_delay(0);
    bool back = false;
    while (!facing_west()) {
        turn_left();
    }
    if (front_is_clear()) {
        back = true;
        while (front_is_clear()) {
            step();
        }
    }

    turn_left();
    turn_left();

    bool is_top = false;
    bool is_top2 = false;

    while (front_is_clear()) {
        step();
        if (left_is_blocked()) {
            is_top = true;
        } else {
            is_top2 = true;
        }
    }

    turn_left();
    turn_left();
    
    if (back) {
        speed = 250;
        set_step_delay(speed);
    }

    while (front_is_clear()) {
        step();
    }

    turn_left();
    turn_left();
    
    speed = 250;
    set_step_delay(speed);

    if (is_top == true && is_top2 == true) {
        run_top();
    } else {
        run_bottom();
    }

    if (back) {
        while (!facing_west()) {
            turn_left();
        }

        while (front_is_clear()) {
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

void run_top() {
    while (front_is_clear()) {
        if (left_is_clear()) {
            turn_left();
            while (front_is_clear()) {
                step();
                if (no_beepers_present()) {
                    put_beeper();
                }
            }
             
            turn_left();
            turn_left();
            
            while (beepers_present()) {
                step();
            }
            
            turn_left();
            step();
        } else {
            step();
        }
    }
}

void run_bottom() {
    while (front_is_clear()) {
        if (right_is_clear()) {
            turn_right();
            while (front_is_clear()) {
                step();
                if (no_beepers_present()) {
                    put_beeper();
                }
            }

            turn_left();
            turn_left();
            
            while (beepers_present()) {
                step();
            }
            
            turn_right();
            step();
        } else {
            step();
        }
    }
}
