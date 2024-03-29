### Question 11

Suppose that i is a variable of type int, f is a variable of type float, and d is a variable of type double. What is the type of the expression i * f / d?

### Solution

The narrower datatype is always automatically promoted to the larger datatype to ensure that no data is lost  
In the 1st step `int` is the narrower type so it is converted to `float`. In the 2nd step float is the narrower datatype so its converted to `double`

(int * float) / double  
float / double  
double
