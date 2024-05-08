### Question 8

Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were replaced by (10 - (total % 10)) % 10?

### Solution

We can check if both the equations are equivalent to each by plugging in the value from total.

Assume total = 16

Using the 1st expression:  
9 - ((16 - 1) % 10)  
9 - (15 % 10)  
9 - 5  
4

Using the 2nd expression:  
10 - (16 % 10) % 10  
10 - (6 % 10)  
10 - 6  
4

Assume total = 20

Using the 1st expression:  
9 - ((20 - 1) % 10)  
9 - (19 % 10)  
9 - 9  
0

Using the 2ns expression:  
10 - (20 % 10) % 10  
10 - (0 % 10)  
10 - 10  
0

As we can see both the expressions produce the same result for the same value of total. This means that both the expressions are equivalent. So, yes the UPC program would still work if it was replaced with the 2nd expression.
