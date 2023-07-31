**Approach:-**

We have to find in how many maximum bowls we can divide the cookies equally.

**Steps:-**
1. Sum up all the elements of the array using one iteration.
2. Iterate from i in range N to 1 and check if sum is divisible by the i, if yes then return the i(maximum number of peoples) 
3. If it cannot be divided then return 0.

The above used approach used is through mathematical logic.

The Time complexity of the above approach would be O(N).

The Space complexity would be constant since we have used just 1 extra variable.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)