### Question 7

Translate the program fragment of Exercise 2 into a single for statement.

```c
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

### Solution

```c
for(i = 9384; i > 0; i /= 10) {
    printf("%d ", i);
}
```
