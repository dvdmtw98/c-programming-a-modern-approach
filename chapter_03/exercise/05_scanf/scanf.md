### Question

Suppose that we call `scanf` as follows:

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters
12.3 45.6 789

What will be the values of x, i, and y after the call? (Assume that x and y are float variables and i is an int variable.)

### Solution

`12.3 45.6 789`

The first conversion specifier is %f so scanf will look for a valid floating-point number. It will read 1, 2, ., 3 and ` ` (space). Since ` ` (space) is not a valid character in a float it will return it to the buffer. The value `12.3` will get saved in the variable x.

` 45.6 789`

The next conversion specifier is %d so scanf will look for a valid integer. It will read the ` ` (space) and ignore it and continue reading the characters. It will read the characters 4, 5 and `.` (period). Since a `.` is not a valid character in an integer it will get put back into the buffer. The value 45 will be saved in the variable i.

`.6 789`

The final conversion specifier is %f. `scanf` will read the characters `.` (period), 6 and ` ` (space). Since space is not a valid character in a float it is put back on the buffer. The value 0.6 is saved in the identifier y.

` 789`

The remaining characters can be accessed by subsequent `scanf` statements.