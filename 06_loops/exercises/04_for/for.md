### Question 4

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?  
(a) for (i = 0; i < 10; i++) …  
(b) for (i = 0; i < 10; ++i) …  
(c) for (i = 0; i++ < 10; ) …  

### Solution

For loop header is comprised on three expressions:
- The 1st expression is called the initialization expression. This expression is evaluated only once right at the first of the 1st iteration  
- The 2nd expression is the condition expression. This expression is evaluated at the start of each iteration of the loop. This expression is used to decide when the loop execution should be terminated.
- The 3rd expression is the update expression. This expression is evaluated for each iteration after the body of the for loop is executed.    

The statement shown in (a) and (b) are identical. Both ++i and i++ will update the value of i before the next iteration starts.

Statement (c) is different. To begin it does not use a update expression. The variable i is updated using the side-effect of the condition expression. The condition expression is evaluated at the start of the loop which is different from the update expression which is evaluated at the end of the loop body. Additionally, since i++ < 10 is used the value of i will not be incremented in the current check, the incremented value will only be available in the next check. Because of this the loop will get executed till i <= 10 even though the condition provided is i < 10.
