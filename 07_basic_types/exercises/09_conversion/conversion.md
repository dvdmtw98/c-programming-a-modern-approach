### Question 9

Suppose that i and j are variables of type int. What is the type of the expression i / j + 'a'?

### Solution

The narrower datatype is always automatically promoted to the larger datatype to ensure that no data is lost  
In this expression `char` is the narrower datatype so its promoted to `int`


(int / int) + char  
int + char  
int
