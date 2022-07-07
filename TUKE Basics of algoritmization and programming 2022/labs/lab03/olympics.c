#include <superkarel.h>

void jump_over();
void turn_right();
void turn_back();
void jump_back();

int speed = 250;
bool go_right = true;

int main() {
    turn_on("olympics8.kw");
    set_step_delay(0);
    speed = 0;
    if (left_is_blocked()) {
        turn_right();
    } else {
        turn_left();
    }
    while (!front_is_blocked()) {
        step();
    }
    if (left_is_blocked()) {
        go_right = true;
    } else {
        go_right = false;
    }
    turn_back();

    while (!front_is_blocked()) {
        step();
    }
    if(go_right) {
        turn_left();
    } else {
        turn_right();
    }
    
    speed = 250;
    set_step_delay(speed);

    while (no_beepers_present()) {
        while (!front_is_blocked()) {
            step();
        }
        if (go_right) {
            jump_over();
        } else {
            jump_back();
        }
    }

    /*while (beepers_present()) {
        pick_beeper();
    }*/
    turn_off();
    return 0;
}

void jump_over() {
    turn_left();
    while (right_is_blocked() && no_beepers_present()) {
        step();
    }

    turn_right();
    if (no_beepers_present()) {
        step();
    }
    while (right_is_blocked() && no_beepers_present()) {
        step();
    }

    turn_right();
    while (!front_is_blocked() && no_beepers_present()) {
        step();
    }
    turn_left();
}

void jump_back() {
    turn_right();
    while (left_is_blocked() && no_beepers_present()) {
        step();
    }
    turn_left();
    if (no_beepers_present()) {
        step();
    }
    while (left_is_blocked() && no_beepers_present()) {
        step();
    }
    turn_left();
    while (!front_is_blocked() && no_beepers_present()) {
        step();
    }
    turn_right();
}

void turn_right() {
    set_step_delay(0);
    for (int i = 0; i <= 2; i++) {
        turn_left();
    }
    set_step_delay(speed);
}

void turn_back() {
    turn_left();
    turn_left();
}
