### Question 14

Supply parentheses to show how a C compiler would interpret each of the following expressions.  
(a) a * b - c * d + e  
(b) a / b % c / d  
(c) - a - b + c - + d  
(d) a * - b / c - d

### Solution

(a) (((a * b) - (c * d)) + e)  
Multiplications are performed first since it has higher precedence  
`+` and `-` have the same precedence so we have to use associativity  
These operators are left associative so we group the terms from the left

(b) (((a / b) % c) / d)  
All the operators have the same precedence so we use associativity  
These operators are left associative so we start grouping the terms from the left

(c) ((((- a) - b) + c) - (+ d))  
The unary operations will be performed first since they have the highest precedence  
All the operators have the same precedence so we use associativity  
These operators are left associative so we start grouping the terms from the left 

(d) (((a * (- b)) / c) - d)  
The unary operation will be performed first since it have the highest precedence  
Next the `*` and `/` operation is performed since they have the next highest precedence  
Finally, the `-` operation is performed
