### Question 1

What output does the following program fragment produce?

```c
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
```

### Solution

The loop will print all the powers of 2 till 128 ($2^8$) 

The output of the code will be: `1 2 4 8 16 32 64 128 `
