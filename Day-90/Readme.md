**Approach:-**

Idea is to use variable size sliding window for solving this problem.

Here the current sum is the variable to increament/decreament the size of the subarray.

**Steps:-**
1. Create a variable sum to store the current sum of the subarray. Create variables i and j to store the start and end indices of the subarray.
2. Iterate from j= 0 to j= n-1,
   a) Increamen sum by arr[j].
   
   b) If sum is greater than s i.e. we are going out of range then, 
   
        - Reduce sum by arr[i] and increament i.
   
        - Repeat above step while sum is greater than s and i is less than j.
   
    c) If sum is equal to s i.e. we got a subarray with given sum then return pair with i+1, j+1.
3. Return -1 representing we not got any subarray with given sum.

A single iteration of time O(N) is required to find subarray with given sum s.

No extra space is needed to solve the problem hence space taken is O(1).

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)