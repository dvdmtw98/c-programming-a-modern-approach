### Question 5

Is the following if statement legal?

```c
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 0?

### Solution

The given statement is legal but its behavior evaluation is not like in math  
It is also legal to have `if` statements without `{...}` when only one statement is involved  
The statement `n is between 1 and 10` will be printed when n = 0  
Equality operators are left associative  
First `n >= 1` will be evaluated which returns `0` (false) then `0 <= 10` is evaluated which returns `1` (true)  
Since the expression evaluated to `1` the statement inside the `if` block is executed. 
