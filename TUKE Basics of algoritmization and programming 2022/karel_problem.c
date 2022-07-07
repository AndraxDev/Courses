/**
 * Problemset 1 with megakarel. You can find maps at /maps-for-problemsets/ps1/
 * Version 1.0
 * Tasks 1-5
 * */
#include "megakarel.h"

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();

int main() {
    task_5();
    return 0;
}

void task_1() {
    turn_on("task_1.kw");
    set_step_delay(100);
    face_east();
    put_beeper();
    if (front_is_clear()) {
        step();
    } else {
        turn_left();
        step();
        if (right_is_clear()) {
            turn_right();
            step();
        }
    }

    while (no_beepers_present()) {
        while (right_is_blocked()) {
            if (beepers_present()) {
                break;
            } else {
                if (front_is_clear()) {
                    step();
                } else {
                    break;
                }
            }
        }

        if (front_is_blocked() && right_is_clear()) {
            turn_right();
            if (beepers_present()) {
                break;
            } else {
                step();
            }
        } else if (front_is_clear() && right_is_clear()) {
            turn_right();
            if (beepers_present()) {
                break;
            } else {
                step();
            }
        } else if (front_is_blocked() && right_is_blocked()) {
            turn_left();
            while (front_is_clear() && right_is_blocked()) {
                if (beepers_present()) {
                    break;
                } else {
                    step();
                }
            }
        }

    }

    pick_beeper();
    face_west();

    while (no_beepers_present()) {
        while (left_is_blocked()) {
            if (beepers_present()) {
                break;
            } else {
                if (front_is_clear()) {
                    step();
                } else {
                    break;
                }
            }
        }

        if (front_is_blocked() && left_is_clear()) {
            turn_left();
            if (beepers_present()) {
                break;
            } else {
                step();
            }
        } else if (front_is_clear() && left_is_clear()) {
            turn_left();
            if (beepers_present()) {
                break;
            } else {
                step();
            }
        } else if (front_is_blocked() && left_is_blocked()) {
            turn_right();
            while (front_is_clear() && left_is_blocked()) {
                if (beepers_present()) {
                    break;
                } else {
                    step();
                }
            }
        }
    }

    pick_beeper();
    face_west();
    turn_off();
}

void task_2() {
    turn_on("task_2.kw");
    set_step_delay(100);
    spiral_left_b();
    if (beepers_present()) {
        pick_beeper();
    }
    turn_back();
    if (facing_north() && front_is_blocked()) {
        turn_right();
    } else if (facing_south() && front_is_blocked()) {
        turn_left();
    }
    spiral_right_b();
    turn_off();
}

void task_3() {
    turn_on("task_3.kw");
    set_step_delay(10);
    face_east();

    while (front_is_clear()) {
        if (beepers_present()) {
            pick_beeper();
        }
        step();
    }

    pick_beepers();
    turn_back();

    while (front_is_clear()) {
        if (right_is_blocked() && beepers_in_bag()) {
            put_beeper();
        }
        step();
    }

    if (right_is_blocked() && beepers_in_bag()) {
        put_beeper();
    }

    turn_left();

    while (true) {
        if (front_is_clear()) {
            step();
        } else {
            break;
        }
        turn_left();
        while (front_is_clear()) {
            if (beepers_present()) {
                pick_beeper();
            }
            step();
        }

        pick_beepers();
        face_west();

        while (front_is_clear()) {
            if (beepers_at_north()) {
                if (beepers_in_bag()) {
                    put_beeper();
                }
            }
            if (front_is_clear()) {
                step();
            } else {
                break;
            }
        }

        turn_left();
    }

    face_north();

    turn_right();

    while (no_beepers_present()) {
        while (front_is_clear() && no_beepers_present()) {
            step();
        }
        if (no_beepers_present()) {
            turn_left();
            if (facing_north()) {
                step();
                turn_left();
            } else {
                turn_back();
                step();
                turn_right();
            }
        }
    }
    face_north();
    run_mile();
    turn_left();
    run_mile();
    face_east();
    turn_off();
}

void task_4() {
    turn_on("task_4.kw");
    set_step_delay(10);
    face_east();
    while (front_is_clear()) {
        turn_left();
        while (front_is_clear()) {
            if (beepers_present()) {
                break;
            } else {
                step();
            }
        }
        if (beepers_present()) {
            face_north();
            run_mile();
            turn_back();
            while (front_is_clear()) {
                if (beepers_present()) {
                    step();
                } else {
                    put_beeper();
                }
            }
            if (no_beepers_present()) {
                put_beeper();
            }
        }

        while (!facing_south()) {
            turn_left();
        }
        while (front_is_clear()) {
            step();
        }
        while (!facing_east()) {
            turn_left();
        }
        if (front_is_clear()) {
            step();
        }
    }

    while (!facing_north()) {
        turn_left();
    }

    while (front_is_clear()) {
        if (beepers_present()) {
            break;
        } else {
            step();
        }
    }

    if (beepers_present()) {
        while (front_is_clear()) {
            step();
        }

        turn_left();
        turn_left();

        while (front_is_clear()) {
            if (no_beepers_present()) {
                put_beeper();
            }
            step();
        }
        if (no_beepers_present()) {
            put_beeper();
        }
    }

    face_south();
    run_mile();
    face_east();
    turn_off();
}

void task_5() {
    turn_on("task_5.kw");
    set_step_delay(10);
    draw_border();
    set_step_delay(0);
    go_center();
    turn_off();
}
