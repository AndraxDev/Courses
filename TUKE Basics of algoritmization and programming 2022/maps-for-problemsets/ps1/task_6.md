# Map 6: Poklad na mape

### Common view

```
 CORNER  FACING  BEEP-BAG  BEEP-CORNER
 (2, 2)   NORTH      0         0
ST.+---------------------------------------+
 8 | .   .   .   .   .   .   .   .   .   . |
   |                                       |
 7 | .   4   .   .   .   3   .   .   .   . |
   |                                       |
 6 | .   .   .   .   .   .   .   .   .   . |
   |                                       |
 5 | .   .   .   .   .   .   .   .   .   . |
   |                                       |
 4 | .   .   .   5   .   .   .   .   2   . |
   |                                       |
 3 | .   .   .   .   .   .   .   .   .   . |
   |                                       |
 2 | .   ^   .   .   .   4   .   .   1   . |
   |                                       |
 1 | .   .   .   .   .   .   .   .   .   . |
   +---------------------------------------+
     1   2   3   4   5   6   7   8   9   10  AVE.
```

### Map file

```
10 8 2 2 N 0

B 2 7 4
B 6 7 3
B 4 4 5
B 9 4 2
B 6 2 4
B 9 2 1

```

### Solution

```c
#include <stdio.h>
#include <you.h>
#include <study.h>

int main() {
    // Be honest!
    printf("Please read disclaimer above :)");
    
    if (you.isHonest() && study.taskIsCompleted(study.PROBLEMSET_1)) {
        // Congratulates
        study.addPoint(1);
    } else if (!you.isHonest() && study.taskIsCompleted(study.PROBLEMSET_1)) {
        // Copying other works is dishonest
        study.removeStudent(you);
    }
}
```

### Hint

```
Too many conditions...
```

# DISCLAIMER | WARNING | CAUTION !!!

```
All files published on this folder ARE NOT solutions for tasks.
These files may only help you to test your program. All files are
published AS IS and there's NO WARRANTY that this files will run
properly.

I will not publish here any code or it's fragments for problemsets
(it is STRICTLY forbidden!). If you are looking for solution, please
read Academic Honesty (Etický kódex) again and close this page.
You do not have right to copy any code (or it's fragments) in this
repository (including labs). Please think carefully! ALL CODE AND
FILES ARE PUBLISHED FOR INFORMATIONAL PURPOSES ONLY AND IS NOT FOR
COPY NOR SOLD. ANY DERIVATIVE WORKS MAY BE THREATED AS A COPY AND
ITS OWNER MAY LOST STUDENT STATUS.
```
