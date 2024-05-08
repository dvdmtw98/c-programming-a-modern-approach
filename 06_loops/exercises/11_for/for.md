### Question 11

What output does the following program fragment produce?

```c
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

### Solution

The body of the `if` statement will get executed when `i % 2 == 1`. This condition will be true for all even numbers  
So when `i` is an even number the `continue` statement will cause the loop iteration to get skipped. The value of sum will be equal to the addition of all even numbers between 0 and 9. 

Output: 0 + 2 + 4 + 6 + 8 = 20
