### Question 3

The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that i, j, and k are int variables.  
(a) i = 3; j = 4; k = 5;  
printf("%d ", i < j || ++j < k);  
printf("%d %d %d", i, j, k);  

(b) i = 7; j = 8; k = 9;  
printf("%d ", i - 7 && j++ < k);  
printf("%d %d %d", i, j, k);  

(c) i = 7; j = 8; k = 9;  
printf("%d ", (i = j) || (j = k));  
printf("%d %d %d", i, j, k);  

(d) i = 1; j = 1; k = 1;  
printf("%d ", ++i || ++j && ++k);  
printf("%d %d %d", i, j, k);  

### Solution

When logical operators are involved we need to remember about short-circuit evaluation. Irrespective of the precedence of the operators each condition of the logical expression is evaluated from the left.

(a)  
(i < j) || ((++j) < k)  
(3 < 4) || ((++j) < k)  
1 || ((++j) < k)  
1  
i = 3, j = 4, k = 5  
The 1st part of the logical expression evaluates to `true` so the 2nd part is never computed. For `OR` if one of the conditions is `true` the entire expression is automatically `true`. Since the 2nd part is never computed the value of `j` is not incremented.  

(b)  
(i - 7) && ((j++) < k)  
(7 - 7) && ((j++) < k)  
0 && ((j++) < k)  
0  
i = 7, j = 8, k = 9  
The 1st part of the logical expression evaluates to true so the 2nd part is never computed. For `AND` if the 1st condition is `false` the entire expression is automatically `false`    

(c)  
(i = j) || (j = k)  
(i = 8) || (j = k)  
8 || (j = k)  
1  
i = 8, j = 8, k = 9  
The condition `(j = 9)` is not evaluated since `(i = 8)` resolved to `true` and `true || anything` is `true`. The expression short-circuits because of which the value of j is never changed.

(d)  
++i || ++j && ++k  
(++1) || ++j && ++k  
2 || ++j && ++k  
1  
i = 2, j = 1, k = 1  
Since the 1st condition evaluates to `true` the 2nd and 3rd condition is not executed. For `OR` if any one of the condition is true the entire expression evaluates to `true`
