### Question 7

The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.

It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.

Why doesn’t this technique work?

### Solution

If we look at the problem in a naive manner it might look like this method will work but in reality that is not the case. The order of operations in an mathematical equation is important. Even decreasing the value of an integer by 1 could cause the result to significantly deviate from the expected result. 

This is understood best with the help of an example.  
Assume total = 30

Using the 1st formula we would get the following result:  
9 - ((total - 1) % 10)  
9 - ((30 - 1) % 10)  
9 - (29 % 10)  
9 - 9  
0

Using the 2nd formula we would get the following result:  
10 - (total % 10)  
10 - (30 % 10)  
10 - 0  
10

As we can see checking the value of the numerator for the remainder operator just by one generates varyingly different results. We can only add or subtract values from an equation if the resultant equation is equivalent to the original equation. In this case the proposed equation is not the same as the original equation so it cannot be used.
