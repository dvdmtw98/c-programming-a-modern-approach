### Question 1

We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type of a's elements, would also work, but it's considered an inferior technique. Why?

### Answer

With the 2nd approach if we change the type of the array we will also need to update t. If the program used the expression multiple times then in all of the expressions t will have to be updated to reflect the new type. With the 1st approach if we change the type of the array we do not have to make any change in the expression.  
