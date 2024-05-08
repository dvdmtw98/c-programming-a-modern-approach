### Question 2

The Q&A section shows how to use a letter as an array subscript. Describe how to use a digit (in character form) as a subscript.

### Answer

The approach would be exactly the same as the example given in the Q&A session.

```c
int array[10] = {0};
char num = '4';
array[num - 0]++;
```

This method only works if the digits have continuous code point in the character set used by the system. This is true for almost all of the character sets that are used today.
