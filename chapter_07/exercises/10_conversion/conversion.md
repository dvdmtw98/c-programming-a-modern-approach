### Question 10

Suppose that i is a variable of type int, j is a variable of type long, and k is a variable of type unsigned int. What is the type of the expression i + (int) j * k?

### Solution

The narrower datatype is always automatically promoted to the larger datatype to ensure that no data is lost  
In the 1st step the cast operator down-casts `long` to `int`. In the 2nd and 3rd step `int` is the narrower datatype so it is converted to `unsigned int`  

int + ((int) long + unsigned int)  
int + (int + unsigned int)  
int + unsigned int  
unsigned int
