### Question 3

Which of the following are not legal types in C?  
(a) `short unsigned int`  
(b) `short float`  
(c) `long double`  
(d) `unsigned long`

### Solution

(a) Legal. Normally it would be written as `unsigned short int` but since C does not enforce order for the specifiers this is valid  
(b) Illegal. The only supported floating-point types are `float`, `double` and `long double`  
(c) Legal. This is one of the supported floating-point types in C  
(d) Legal. `unsigned long` is an alias for `unsigned long int`
