### Question 6

Is the following if statement legal?  

```c
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 5?

### Solution

The given statement is legal, expressions are allowed on either side of the comparison operator    
It is also legal to have `if` statements without `{...}` when only one statement is involved  
This snippet does not print anything when `n = 5` since `5 != -9`
