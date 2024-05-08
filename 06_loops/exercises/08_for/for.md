### Question 8

What output does the following for statement produce?  

```c
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

### Solution

Output: `5 3 2 1 1 1 1 ...` (Infinite Loop)

The postfix operator `i++` causes the value of i to always get incremented by 1 before the condition expression is evaluated  
Because of this even when i becomes 1 the `i++` will cause it to become 2 before the condition expression is evaluated  
