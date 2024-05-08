### Question 8

The following if statement is unnecessarily complicated. Simplify it as much as possible.  
(Hint: The entire statement can be replaced by a single assignment.)

```c
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenager = false;
```

### Solution

If we look at the if statement we observe that true should be returned when age is between 13 and 19 (inclusive) in all other condition it should return false  
This statement can be simplified using an condition expression into a single line  

```c
teenager = (age >= 13 && age <= 19) ? true : false
```
