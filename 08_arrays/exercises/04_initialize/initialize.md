### Question 4

(C99) Repeat Exercise 3, but this time use a designated initializer. Make the initializer as short as possible.

### Answer

```c
#include <stdbool.h>

bool weekend = {true, [6] = true};
```
