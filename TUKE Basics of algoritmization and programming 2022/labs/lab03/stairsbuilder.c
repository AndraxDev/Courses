#include <superkarel.h>

int speed = 250;
void turn_right();

int main() {
    turn_on("stairsbuilder2.kw");
    set_step_delay(speed);
    int beepers_count = 0;
    step();
    turn_right();

    set_step_delay(0);
    while (beepers_present()) {
        pick_beeper();
        beepers_count++;
    }

    for (int i = 0; i < beepers_count; i++) {
        put_beeper();
    }
    set_step_delay(speed);
    step();
    int current_step = beepers_count - 1;
    for (int i = 0; i < beepers_count; i++) {
        for (int j = 0; j < current_step; j++) {
            put_beeper();
        }

        if (front_is_clear()) {
            step();
            current_step--;
        } else {
            break;
        }
    }
    turn_left();
    turn_left();
    while (front_is_clear()) {
        step();
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
