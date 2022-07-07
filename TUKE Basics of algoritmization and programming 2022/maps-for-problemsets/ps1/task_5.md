# Map 5: Rám s obrazom

### Common view

```
 CORNER  FACING  BEEP-BAG  BEEP-CORNER
 (3, 1)   NORTH     100         0
ST.+-----------+
 5 | .   .   . |
   |           |
 4 | .   .   . |
   |           |
 3 | .   .   . |
   |           |
 2 | .   .   . |
   |           |
 1 | .   .   ^ |
   +-----------+
     1   2   3   AVE.
```

### Map file

```
3 5 3 1 N 99

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
// Spiral
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
