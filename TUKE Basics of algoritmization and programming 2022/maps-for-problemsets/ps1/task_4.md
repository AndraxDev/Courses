# Map 4: Oprava Krásnej Hôrky

### Common view

```
 CORNER  FACING  BEEP-BAG  BEEP-CORNER
 (1, 1)   EAST      99         1
ST.+-------------------------------------------+
 8 | .   .   .   .   .   .   .   .   .   .   . |
   |       +---+                       +---+   |
 7 | .   . | . | .   .   .   .   .   . | . | . |
   |   +---+   +---+   +-------+   +---+   +---|
 6 | . | .   .   . | . | .   . | . | .   .   1 |
   |---+           +---+       +---+           |
 5 | 1   .   .   .   .   .   .   1   .   .   1 |
   |                                           |
 4 | .   .   .   .   1   .   .   .   .   .   . |
   |                                           |
 3 | .   .   .   .   .   .   .   1   .   .   1 |
   |                                           |
 2 | .   .   .   .   1   .   .   .   .   .   . |
   |                                           |
 1 | >   .   .   .   1   .   .   .   .   .   1 |
   +-------------------------------------------+
     1   2   3   4   5   6   7   8   9   10  11  AVE.
```

### Map file

```
11 8 1 1 E 99

W 3 8 S
W 10 8 S
W 2 7 E
W 2 7 S
W 3 7 E
W 4 7 S
W 6 7 S
W 7 7 S
W 9 7 E
W 9 7 S
W 10 7 E
W 11 7 S
W 1 6 E
W 1 6 S
W 4 6 E
W 5 6 E
W 5 6 S
W 7 6 E
W 8 6 E
W 8 6 S

B 11 6 1
B 1 5 1
B 8 5 1
B 11 5 1
B 5 4 1
B 8 3 1
B 11 3 1
B 5 2 1
B 5 1 1
B 11 1 1
B 1 1 1

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
Find beepers...
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
