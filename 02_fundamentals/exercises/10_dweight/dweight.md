### Question 10

In the dweight.c program (Section 2.4), which spaces are essential?

### Solution

The space after `#include`, the newline after `<stdio.h>`, the space after `int` and the space after `return` are the essential spaces in the program.

```c
#include <stdio.h>
int main(void){int length,width,height,volume,weight;length=12;width=10;height=8;volume=length*width*height;weight=(volume+165)/166;printf("Dimension: %dx%dx%d\n",length,width,height);printf("Volume (cubic inches): %d\n",volume);printf("Dimensional Weight (pounds): %d\n",weight);return 0;}
```
