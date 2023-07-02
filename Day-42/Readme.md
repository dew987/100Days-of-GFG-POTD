**Approach:-**

1. Store the set bits from L to R in a variable "temp". (order of bits is reversed)
2. Store the set bits from L to R in a second variable "oring". (order is corrected)
3. Left shift the variable oring L times.
4. Perform or operation of x and y and return the answer.


**Time Complexity:-** O(R-L)

**Space Complexity:-** O(1)
