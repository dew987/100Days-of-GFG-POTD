**Approach:-**

Idea is to for each element in the matrix who is 1, find the number of surrounding 0 and if it is even then increament the final count.

**Steps:-**
1. Take a variable ans to represent the answer and set it to 0. Also find n and m using matrix.size() and matrix[0].size resply.
2. Iterate from i= 0 to i= n-1,
    
    Iterate from j= 0 to j= m-1,
    
    a) If element at index i, j of matrix is set to 1 then, check all the surrounding elements and check if they are in Valid ranges of indices of matrix and if they are set to 0 then increament current count.
    
    b) If current count is greater than 0 and current count is even then increament value of answer.
3. Return the value of answer.

We are iterating in the matrix only 1 time and executing 8 conditions each taking O(1) time hence overall time taken is O(m*n).

No extra space is taken other than to store the current count and answer variable i.e. space taken is O(1).

**Time Complexity:-** O(n*m)

**Space Complexity:-** O(1)