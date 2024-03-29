### Question 14

Does the following statement always compute the fractional part of f correctly (assuming that f and frac_part are float variables)?  
frac_part = f - (int) f;  
If not, what’s the problem?

### Solution

No, the conversion will always be performed correctly  
The operation will fail when the value stored in f is greater than the largest number that can be stored in int datatype.
