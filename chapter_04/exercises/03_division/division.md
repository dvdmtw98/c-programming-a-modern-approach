### Question 3

What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)  
(a) 8 / 5  
(b) -8 / 5  
(c) 8 / -5  
(d) -8 / -5  

### Solution

(a) 8 / 5 = 1  
(b) -8 / 5 = -1 or -2  
(c) 8 / -5 = -1 or -2  
(d) -8 / -5 = 1 or 2

In C89 the behavior of division is implementation dependent. The result would be rounded towards 0 or towards negative infinity based on the implementation being used.
