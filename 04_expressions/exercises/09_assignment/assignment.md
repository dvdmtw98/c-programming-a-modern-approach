### Question 10

Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.

(a) i = 7; j = 8;  
i *= j + 1;  
printf("%d %d", i, j);

(b) i = j = k = 1;  
i += j += k;  
printf("%d %d %d", i, j, k);

(c) i = 1; j = 2; k = 3;  
i -= j -= k;  
printf("%d %d %d", i, j, k);

(d) i = 2; j = 1; k = 0;  
i *= j *= k;  
printf("%d %d %d", i, j, k);

### Solution

(a)  
i *= j + 1  
i = i * (j + 1)  
i = 7 * (8 + 1)  
i = 7 * 9  
i = 63  

j = 8  
Assignment operators have the least precedence in C

(b)  
i += j += k  
i += (j += k)  
i += (j = j + k)  
i += (j = 1 + 1)  
i += (j = 2)  
i = i + 2  
i = 3  

j = 2  
k = 1  
Assignment operators are right associative which means they have to be solved right-to-left

(c)  
i -= j -= k  
i -= (j -= k)  
i -= (j = j - k)  
i -= (j = 2 - 3)  
i -= (j = -1)   
i = 1 - (-1)  
i = 1 + 1
i = 2

j = -1  
k = 3  
Assignment operators are right associative which means they have to be solved right-to-left

(d)  
i *= j *= k  
i *= (j *= k)  
i *= (j = j * k)  
i *= (j = 1 * 0)  
i *= (j = 0)  
i = 2 * 0  
i = 0

j = 0  
k = 0  
Assignment operators are right associative which means they have to be solved right-to-left
