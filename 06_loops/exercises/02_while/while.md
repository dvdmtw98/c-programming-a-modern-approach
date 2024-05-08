### Question 2

What output does the following program fragment produce?

```c
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

### Solution

In each iteration the value of `i` is divided by 10. Since `i` is an integer the decimal value will be lost. In each iteration the number will shrink by a digit.

The output of the code: `9384 938 93 9 `
