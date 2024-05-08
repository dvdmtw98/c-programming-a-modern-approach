### Question 5

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?  
(a) while (i < 10) {…}  
(b) for (; i < 10;) {…}  
(c) do {…} while (i < 10);

### Solution

Statements (a) and (b) are equivalent.

Statement (c) is executed once irrespective of the value of i. This is cause the condition in a `do-while` loop is checked after the body of the loop is executed. If i is i >= 10 then statements (a) and (b) will not execute while statement (c) will be executed once.
