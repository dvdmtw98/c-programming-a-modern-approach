### Question 8

What does the following statement print if i has the value 17? What does it print if i has the value –17?

```c
printf("%d\n", i >= 0 ? i : -i);
```

### Solution
A conditional statement returns the first expression after the `?` if the condition evaluated to `1` (true)  
When `i = 17` the condition `17 >= 0` evaluates to `1` (true) so the value of `i` (17) is printed  
When `i = -17` the condition `-17 >= 0` evaluates to `0` (false) so the value of `-i` (17) is printed  
The value is 17 in the 2nd condition because -(-17) = 17
