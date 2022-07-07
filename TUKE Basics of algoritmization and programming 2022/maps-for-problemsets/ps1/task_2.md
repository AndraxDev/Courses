# Map 2: Poklad v tuneli

### Common view

```
 CORNER  FACING  BEEP-BAG  BEEP-CORNER
 (1, 1)   EAST       0         0
ST.+-------------------------------+
 8 | .   .   .   .   .   .   .   . |
   |   +-----------------------+   |
 7 | . | .   .   .   .   .   . | . |
   |   |   +---------------+   |   |
 6 | . | . | .   .   .   . | . | . |
   |   |   |   +-------+   |   |   |
 5 | . | . | . | 1   . | . | . | . |
   |   |   |   +----   |   |   |   |
 4 | . | . | .   .   . | . | . | . |
   |   |   +-----------+   |   |   |
 3 | . | .   .   .   .   . | . | . |
   |   +-------------------+   |   |
 2 | .   .   .   .   .   .   . | . |
   |---------------------------+   |
 1 | >   .   .   .   .   .   .   . |
   +-------------------------------+
     1   2   3   4   5   6   7   8   AVE.
```

### Map file

```
8 8 1 1 E 0

W 2 8 S
W 3 8 S
W 4 8 S
W 5 8 S
W 6 8 S
W 7 8 S
W 1 7 E
W 3 7 S
W 4 7 S
W 5 7 S
W 6 7 S
W 7 7 E
W 1 6 E
W 2 6 E
W 4 6 S
W 5 6 S
W 6 6 E
W 7 6 E
W 1 5 E
W 2 5 E
W 3 5 E
W 4 5 S
W 5 5 E
W 6 5 E
W 7 5 E
W 1 4 E
W 2 4 E
W 3 4 S
W 4 4 S
W 5 4 E
W 5 4 S
W 6 4 E
W 7 4 E
W 1 3 E
W 2 3 S
W 3 3 S
W 4 3 S
W 5 3 S
W 6 3 E
W 6 3 S
W 7 3 E
W 1 2 S
W 2 2 S
W 3 2 S
W 4 2 S
W 5 2 S
W 6 2 S
W 7 2 E
W 7 2 S

B 4 5 1

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
Front is clear?...
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
