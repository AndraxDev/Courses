// Colors Library
// Created by Teslasoft (Dmytro Ostapenko) on 11/11/2021. (v1.0)
//

/* Uncomment if you are using this code as separated library (importing as "colors.h" instead of putting this code directly to your C file)
#ifndef COLORS_COLORS_H
#define COLORS_COLORS_H

#endif //COLORS_COLORS_H
*/

const char RED[8] = "\033[0;31m\0";
const char YELLOW[8] = "\033[0;33m\0";
const char GREEN[8] = "\033[0;32m\0";
const char BLUE[8] = "\033[0;34m\0";
const char MAGENTA[8] = "\033[0;35m\0";
const char CYAN[8] = "\033[0;36m\0";
const char BLACK[8] = "\033[0;30m\0";
const char WHITE[8] = "\033[0;37m\0";

const char BOLD_RED[8] = "\033[1;31m\0";
const char BOLD_YELLOW[8] = "\033[1;33m\0";
const char BOLD_GREEN[8] = "\033[1;32m\0";
const char BOLD_BLUE[8] = "\033[1;34m\0";
const char BOLD_MAGENTA[8] = "\033[1;35m\0";
const char BOLD_CYAN[8] = "\033[1;36m\0";
const char BOLD_BLACK[8] = "\033[1;30m\0";
const char BOLD_WHITE[8] = "\033[1;37m\0";

const char RESET[5] = "\033[0m\0";

// Syntax: printf("Some text in %sRED%s or %sBLUE%s", RED, RESET, BLUE, RESET);

/*
If you are getting an error (colors.h: no such file or directory) while compiling your project just copy this code to your C file and remove #import "colors.h"
*/

// WARNING: Removing copyright symbols or author name is prohibited. In case if you remove it your work may be treated as plagiarism according to the Academy Honecy.
