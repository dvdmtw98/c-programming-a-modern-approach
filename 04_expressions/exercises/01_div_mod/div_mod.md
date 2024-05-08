### Question 1

Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables  
(a) i = 5; j = 3;  
printf("%d %d", i / j, i % j);  
(b) i = 2; j = 3;  
printf("%d", (i + 10) % j);  
(c) i = 7; j = 8; k = 9;  
printf("%d", (i + 10) % k / j);  
(d) i = 1; j = 2; k = 3;  
printf("%d", (i + 5) % (j + 2) / k);  

### Solution

(a)  
i / j = 5 / 3 = 1.667 = 1  
Since i and j are both integers the result of the division will also be an integer  
i % j = 5 % 3 = 2

(b)  
(i + 10) % j = (2 + 10) % 3 = 12 % 3 = 0  

(c)  
(i + 10) % k / j = (7 + 10) % 9 / 8 = ((17 % 9) / 8) = 8 / 8 = 1  
% and / both have the same priority and are left associative

(d)  
(i + 5) % (j + 2) / k = (1 + 5) % (2 + 2) / 3 = ((6 % 4) / 3) = 2 / 3 = 0  
% and / both have the same priority and are left associative  
Since 2 and 3 are both integers the result of the division will also be an integer  
