### Question 10

What output does the following program fragment produce? (Assume that i is an integer variable.)

```c
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

### Solution

The program produces the output `onetwo`  
`1 % 3` evaluates to 1 which means control will jump to `case 1`. Since the case does not end with `break` all the cases that appear after it will also get executed
