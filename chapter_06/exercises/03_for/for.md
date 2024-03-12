### Question 3

What output does the following for statement produce?

```c
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

### Solution

The code will print: `5 4 3 2 `

In the initialization expression the value of j is set to the value of i minus 1  
Similarly in the update expression the when the value of i is decremented by 1 the value of j is decremented by value of i minus 1. Which means the value of j is always 1 less than the value of i

When we reach the end of the 4th iteration, value of i will be decremented to 1 and the value of j will be decremented to 0  
When the condition expression is evaluated i > 0 will return true but the value of j > 0 will return false  
When the comma operator is used we know that the value of the last expression becomes the value of the entire expression  
Since j > 0 is false the entire condition expression becomes false and the loop is terminated 
