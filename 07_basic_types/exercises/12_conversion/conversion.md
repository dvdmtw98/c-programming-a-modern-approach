### Question 12

Suppose that i is a variable of type int, f is a variable of type float, and d is a variable of type double. Explain what conversions take place during the execution of the following statement:
d = i + f;

### Solution

`double`  
For the addition operation i will be converted to `float` and added to f. The result which is a `float` will be converted to `double` before being stored in d
