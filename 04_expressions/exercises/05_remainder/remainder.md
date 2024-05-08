### Question 5

What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)  
(a) 8 % 5  
(b) -8 % 5  
(c) 8 % -5  
(d) -8 % -5  

### Solution

(a) 8 % 5 = 3  
(b) -8 % 5 = -3 or 2  
(c) 8 % -5 = 3 or -2  
(d) -8 % -5 = -3 or 2

[Modulo - Wikipedia](https://en.wikipedia.org/wiki/Modulo)  
Remainder is calculated using the formula `a % b = a - (a / b) * b` where the value of `a / b` is dependent of the implementation of the division operator (round up or round down).
