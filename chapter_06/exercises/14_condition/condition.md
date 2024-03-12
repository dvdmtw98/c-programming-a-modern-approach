### Question 14

Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even\n");
```

### Solution

The semicolon after the parenthesis is the error in the program. Semicolon creates a NULL statement. So in the above program we have a `if` statement without a body. Even though the `printf` statement is indented its not the body of the `if` statement.

```c
if (n % 2 == 0)
    printf("n is even\n");
```
