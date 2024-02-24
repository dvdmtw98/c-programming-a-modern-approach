### Question 6

Repeat Exercise 5 for C99

### Solution

(a) 8 % 5 = 3  
(b) -8 % 5 = -3  
(c) 8 % -5 = 3  
(d) -8 % -5 = -3

In C99 the division operator was fixed to always round towards 0 which means that when we use the formula `a%b = a - (a/b) * b` we only have a single value for `a/b` and because of this the result of remainder is also a single value.
