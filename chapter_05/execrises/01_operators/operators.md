### Question 1

The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that i, j, and k are int variables.  
(a) i = 2; j = 3;  
k = i * j == 6;  
printf("%d", k);  

(b) i = 5; j = 10; k = 1;  
printf("%d", k > i < j);  

(c) i = 3; j = 2; k = 1;  
printf("%d", i < j == j < k);  

(d) i = 3; j = 4; k = 5;  
printf("%d", i % j + i < k);

### Solution

(a)  
k = (i * j) == 6  
k = (2 * 3) == 6  
k = 6 == 6  
k = 1

(b)  
(k > i) < j  
(1 > 5) < 10  
0 < 10  
1

(c)  
(i < j) == (j < k)  
(3 < 2) == (2 < 1)  
0 == 0  
1

(d)  
((i % j) + i) < k  
((3 % 4) + 3) < 5  
(3 + 3) < 5  
6 < 5  
0
