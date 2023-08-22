**Approach:-**

Idea is to sumUp all the values for each row and col and then identify what to increment in the row/col.

**Steps:-**
1. Create rowSum and colSum arrays of size n each initialized as 0s. Create a variable maxi to store the maximum sum obtained for row/col and set it as 0 also create a variable ans to store the answer(the no. of increaments to be made).
2. Iterate for i in range i= 0 to i= n-1,
    
    Iterate for j in range j= 0 to j= n-1,
        
        a) increment rowSum[i] by matrix[i][j].
        
        b) increament colSum[i] by matrix[j][i].
    Update maxi if either rowSum[i] or colSum[i] is greater than it.
3. Iterate for i in range i= 0 to i= n-1,
    
    a) Update rowSum[i] as maxi- rowSum[i] i.e. the diff between maxi and rowSum[i].
    
    b) Update colSum[i] as maxi- colSum[i] i.e. the diff between maxi and colSum[i].
4. Iterate for i in range i= 0 to i= n-1,
    
    Iterate for j in range j= 0 to j= n-1,
        
        - If either of rowSum[i] and colSum[i] is not 0(it means updation needed) then,
        
        a) Find minimum of rowSum[i] and colSum[i].
        
        b) Decreament rowSum[i] and colSum[i] by this minimum value.
        
        c) Increament the answer by minimum value.
5. Return the ans.

We are iterating in the matrix only hence overall time taken is O(N*N).

Two arrays to store the row sum and col sum is needed of each of size n hence overall space taken is O(N).


**Time Complexity:-** O(N*N)

**Space Complexity:-** O(N)