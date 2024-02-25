### Question 2

If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer.

### Solution

`- (i/j)` would produce the same results irrespective of the version of C. The behavior of positive integer division is the same in C89 and C99.

`(-i)/j` will not produce the same results in C89 and C99. 

The following section from the C89 draft discusses how division for negative numbers are handled: [The C89 Draft](https://port70.net/~nsz/c/c89/c89-draft.html#3.3.5)  
TLDR; the result could be rounded up or down based on the implementation.  
So, the result can be -1 or -2.  
On the other hand in C99 the implementation was changed to always truncate the result towards 0.  
So the result would always be -1.
