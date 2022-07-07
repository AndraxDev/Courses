#include <superkarel.h>

int speed = 250;

int main() {
    turn_on("mirror.kw");
    set_step_delay(speed);
    int arraySize = 1;
    set_step_delay(0);
    while (front_is_clear() && beepers_present()) {
        step();
        arraySize++;
    }
    bool front_mod = false;
    turn_left();
    turn_left();
    while (front_is_clear()) {
        step();
    }
    turn_left();
    turn_left();
    int len[arraySize];
    int position = 0;
    for (int j = 0; j < arraySize; j++) {
        len[j] = 0;
    }
    set_step_delay(speed);
    while (beepers_present()) {
        int beepers_count = 0;
        while (beepers_present()) {
            pick_beeper();
            beepers_count++;
        }

        len[position] = beepers_count;
        position++;
        if (front_is_clear()) {
            front_mod = true;
            step();
        } else {
            front_mod = false;
        }
    }
    
    turn_left();
    turn_left();

    if (front_mod) {
        step();
    }

    for (int n = 0; n < arraySize; n++) {
            //step();
        for (int m = 0; m < len[n]; m++) {
            put_beeper();
        }
        if (front_is_clear()) {
            step();
        }
    }
    
    turn_off();
    return 0;
}
