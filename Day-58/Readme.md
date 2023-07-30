**Approach:-**

Approach is to use dynamic programming concept to solve the problem using a 2d matrix.
This problem is a similar variation of Longest Common Subsequence problem.

**Steps:-**
1. Create a 2d matrix of size N+1 * N+1 and initialize all elements as 0.
2. for i in range 1 to n,

    a)for j in range 1 to n,
     - If the element at i-1th index is equal to j-1th index and i not equals to j then, set table[i][j] as 1+ table[i-1][j-1](diagonal element).
     - Else set table[i][j] as max of table[i-1][j] and table[i][j-1](left and top elemens).
3. Return table[n][n].

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
