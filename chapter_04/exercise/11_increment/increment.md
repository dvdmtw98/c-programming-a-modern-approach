### Question 11

Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.

(a) i = 1;  
printf("%d ", i++ - 1);  
printf("%d", i);

(b) i = 10; j = 5;  
printf("%d ", i++ - ++j);  
printf("%d %d", i, j);

(c) i = 7; j = 8;  
printf("%d ", i++ - --j);  
printf("%d %d", i, j);

(d) i = 3; j = 4; k = 5;  
printf("%d ", i++ - j++ + --k);  
printf("%d %d %d", i, j, k);

### Solution

(a)  
printf("%d ", i++ - 1); // 0    
i++ - 1 = 1 - 1 = 0  
i++ means use the value then increment it  

printf("%d", i); // 2  

(b)  
printf("%d ", i++ - ++j); // 4  
i++ - ++j = 10 - 6 = 4  

printf("%d %d", i, j); // 11, 6

(c)  
printf("%d ", i++ - --j); // 0  
i++ - --j = 7 - 7 = 0  

printf("%d %d", i, j); // 8, 7  

(d)  
printf("%d ", i++ - j++ + --k); // 3  
i++ - j++ + --k = 3 - 4 + 4 = 3  

printf("%d %d %d", i, j, k); // 4, 5, 4  
