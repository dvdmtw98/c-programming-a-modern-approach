### Question

Suppose that we call `scanf` as follows:

```c
scanf("%d%f%d", &i, &x, &j);
```

If the user enters
10.3 5 6
What will be the values of i, x, and j after the call? (Assume that i and j are int variables and x is a float variable.)

### Solution

`10.3 5 6`

Since the first conversion specifier is %d scanf will try to read an integer. It will read 1, 0 and `.` (period). But since `.` is not a character that is found in integers it will put it back into the buffer. The value `10` is saved into i.

`.3 5 6`

The next conversion specifier is %f so scanf will try to read a floating-point number. It will read `.`, 3 and ` ` (space). Since a float cannot contain a space it will return it put back into the buffer and save the value 0.3 in the identifier x.

` 5 6`

The final conversion specifier is %d. `scanf` will read the ` ` (space) and ignore and continue reading the remaining characters. 5 and ` ` (space). Since space is not a valid character for integers it will be returned to the buffer. The value 5 will be saved in the identifier j.

` 6`

The remaining characters can be read by subsequent `scanf` statements.