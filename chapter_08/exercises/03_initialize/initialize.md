### Question 3

Write a declaration of an array named weekend containing seven bool values. Include an initializer that makes the first and last values true; all other values should be false.

```c
#define true 1
#define false 0
#define bool int

bool weekend[] = {true, false, false, false, false, false, true};
```

ForTo compile the code we would have to use C99 and newer. An macro can be created to represent the datatype `bool` on older versions of C. 
