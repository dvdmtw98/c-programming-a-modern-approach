### Question 4

If c is a variable of type char, which one of the following statements is illegal?  
(a) `i += c;` /* i has type int */  
(b) `c = 2 * c - 1;`  
(c) `putchar(c);`  
(d) `printf(c);`

### Solution

(a) Legal. When char is used in a expression its numeric value is used to perform the calculation     
(b) Legal. When char is used in a expression its numeric value is used to perform the calculation     
(c) Legal. `putchar()` can be used to directly print a char to the terminal. It does not require a format specifier  
(d) Illegal. The 1st argument to `printf` is always a string which must contain format specifiers for substituting values of variables.
