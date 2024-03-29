### Question 2

Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.  
(a) `010E2`  
(b) `32.1E+5`  
(c) `0790`  
(d) `100_000`  
(e) `3.978e-2`

### Solution

(a) Represents a `legal floating-point` decimal number  
(b) Represents a `legal floating-point` decimal number  
(c) Represents a `illegal octal` number. Octal numbers can only use the digits from 0-7. This constant uses the number 9 which is invalid  
(d) This is an `illegal decimal` number. Underscores cannot be used in C to represent thousands separator  
(e) Represents a `legal floating-point` decimal number 


