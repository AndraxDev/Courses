/**
 * Karel to scratch :)
 * This library contains some functions that may simplify your solution
 * Version 1.1.2
 * Created by Dmytro Ostapenko
 * For student with low level of C and algorithms knowledge
 * Для студентов с низким уровнем знаний языка С и алгоритмов
 * */

#include <superkarel.h>

void face_north() {
    while (!facing_north()) {
        turn_left();
    }
}

void face_south() {
    while (!facing_south()) {
        turn_left();
    }
}

void face_east() {
    while (!facing_east()) {
        turn_left();
    }
}

void face_west() {
    while (!facing_west()) {
        turn_left();
    }
}

void calibrate() {
    /* CALIBRATION START */
    face_south();
    while (front_is_clear()) {
        step();
    }
    face_west();
    while (front_is_clear()) {
        step();
    }
    face_east();
    /* CALIBRATION END */
}

int metrics_x() {
    calibrate();
    int x = 0;
    while (front_is_clear()) {
        step();
        x++;
    }
    return x;
}

int metrics_y() {
    calibrate();
    while (front_is_clear()) {
        step();
    }
    face_north();
    int y = 0;
    while (front_is_clear()) {
        step();
        y++;
    }
    return y;
}

void find_center(int x, int y) {
    calibrate();
    for (int i = 0; i < (x/2); i++) {
        if (front_is_clear()) {
            step();
        }
    }
    face_north();
    for (int j = 0; j < (y/2); j++) {
        if (front_is_clear()) {
            step();
        }
    }
}

void go_center() {
    calibrate();
    int width = metrics_x();
    int height = metrics_y();
    find_center(width, height);
}

void draw_border() {
    calibrate();
    while (no_beepers_present()) {
        while (front_is_clear()) {
            put_beeper();
            step();
        }
        turn_left();
    }
}

void turn_right() {
    for (int i = 0; i < 3; i++) turn_left();
}

void turn_back() {
    turn_left();
    turn_left();
}

void pick_beepers() {
    while (beepers_present()) {
        pick_beeper();
    }
}

int count_beepers() {
    int beepers = 0;
    while (beepers_present()) {
        pick_beeper();
        beepers++;
    }
    for (int i = 0; i < beepers; i++) {
        put_beeper();
    }
    return beepers;
}

void run_mile () {
    while (front_is_clear()) {
        step();
    }
}

void run_mile_left_blocked () {
    while (front_is_clear() && left_is_blocked()) {
        step();
    }
}

void run_mile_right_blocked () {
    while (front_is_clear() && right_is_blocked()) {
        step();
    }
}

void run_mile_left_clear () {
    while (front_is_clear() && left_is_clear()) {
        step();
    }
}

void run_mile_right_clear () {
    while (front_is_clear() && right_is_clear()) {
        step();
    }
}

void run_mile_beepers_present () {
    while (front_is_clear() && beepers_present()) {
        step();
    }
}

void run_mile_no_beepers_present () {
    while (front_is_clear() && no_beepers_present()) {
        step();
    }
}

// This function requires specified map
void spiral_left () {
    while (front_is_clear()) {
        while (front_is_clear()) {
            step();
        }
        turn_left();
    }
}

// This function requires specified map
void spiral_right () {
    while (front_is_clear()) {
        while (front_is_clear()) {
            step();
        }
        turn_right();
    }
}

// This function requires specified map
void spiral_left_b () {
    while (front_is_clear()) {
        while (front_is_clear()) {
            if (no_beepers_present()) {
                step();
            } else {
                break;
            }
        }
        if (beepers_present()) {
            break;
        }
        turn_left();
    }
}

// This function requires specified map
void spiral_right_b () {
    while (front_is_clear()) {
        while (front_is_clear()) {
            if (no_beepers_present()) {
                step();
            } else {
                break;
            }
        }
        if (beepers_present()) {
            break;
        }
        turn_right();
    }
}

void recover_direction(int direction) {
    if (direction == 1) {
        face_north();
    }
    if (direction == 2) {
        face_east();
    }
    if (direction == 3) {
        face_south();
    }
    if (direction == 4) {
        face_west();
    }
}

bool beepers_at_north () {
    int direction = 0;
    if (facing_north()) {
        direction = 1;
    }

    if (facing_east()) {
        direction = 2;
    }

    if (facing_south()) {
        direction = 3;
    }

    if (facing_west()) {
        direction = 4;
    }
    face_north();
    if (front_is_blocked()) {
        recover_direction(direction);
        return false;
    } else {
        step();
        if (beepers_present()) {
            turn_back();
            step();
            recover_direction(direction);
            return true;
        } else {
            turn_back();
            step();
            recover_direction(direction);
            return false;
        }
    }
}

bool beepers_at_east () {
    int direction = 0;
    if (facing_north()) {
        direction = 1;
    }

    if (facing_east()) {
        direction = 2;
    }

    if (facing_south()) {
        direction = 3;
    }

    if (facing_west()) {
        direction = 4;
    }
    face_east();
    if (front_is_blocked()) {
        recover_direction(direction);
        return false;
    } else {
        step();
        if (beepers_present()) {
            turn_back();
            step();
            recover_direction(direction);
            return true;
        } else {
            turn_back();
            step();
            recover_direction(direction);
            return false;
        }
    }
}

bool beepers_at_south () {
    int direction = 0;
    if (facing_north()) {
        direction = 1;
    }

    if (facing_east()) {
        direction = 2;
    }

    if (facing_south()) {
        direction = 3;
    }

    if (facing_west()) {
        direction = 4;
    }
    face_south();
    if (front_is_blocked()) {
        recover_direction(direction);
        return false;
    } else {
        step();
        if (beepers_present()) {
            turn_back();
            step();
            recover_direction(direction);
            return true;
        } else {
            turn_back();
            step();
            recover_direction(direction);
            return false;
        }
    }
}

bool beepers_at_west () {
    int direction = 0;
    if (facing_north()) {
        direction = 1;
    }

    if (facing_east()) {
        direction = 2;
    }

    if (facing_south()) {
        direction = 3;
    }

    if (facing_west()) {
        direction = 4;
    }
    face_west();
    if (front_is_blocked()) {
        recover_direction(direction);
        return false;
    } else {
        step();
        if (beepers_present()) {
            turn_back();
            step();
            recover_direction(direction);
            return true;
        } else {
            turn_back();
            step();
            recover_direction(direction);
            return false;
        }
    }
}
