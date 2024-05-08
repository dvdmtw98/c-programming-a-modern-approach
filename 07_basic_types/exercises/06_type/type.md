### Question 6

For each of the following items of data, specify which one of the types char, short, int, or long is the smallest one guaranteed to be large enough to store the item.  
(a) Days in a month  
(b) Days in a year  
(c) Minutes in a day  
(d) Seconds in a day

### Solution

(a) `char`. At max we have 31 days in a month. unsigned char can represent numbers up to 255. And signed char can represent positive numbers up to 127  
(b) `short`. At max we have 366 days in a year. unsigned short can represent numbers up to 65,535 and signed short can represent positive numbers up to 32,767  
(c) `short`. There are 1440 minutes in a day. unsigned short can represent numbers up to 65,535 and signed short can represent positive numbers up to 32,767  
(d) `int`. There are 86,400 minutes in a day. unsigned int can represent numbers up to 4,294,967,295 and signed int can represent positive numbers up to 2,147,483,647. On older systems that use 16-bit integers we will have to use `long` since 86,400 requires 17 bits to be stored.
