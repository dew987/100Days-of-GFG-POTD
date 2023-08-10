**Approach:-**

Approach is to use dynamic programming concept to solve the problem using the concept of tabulation.
A matrix of (N+1)*(N+1) will be needed for tabulation.

**Steps:-**
1. Create a 2d matrix of size (N+1) * (N+1) and initialize all elements as 0.
2. for i in range 1 to n,
    a)for j in range 1 to n,
     - If the element at i-1th index of string 1 is equal to j-1th index of string 2 and i not equals to j then, set table[i][j] as 1+ table[i-1][j-1](diagonal element).
     - Else set table[i][j] as max of table[i-1][j] and table[i][j-1](left and top elemens).
3. Return table[n][n].

The table[n][n] element gives the length of longest common subsequence between two strings string 1 and string 2.

We are iterating in the matrix of order N hence the time complexity is O(N^2).

The space utilized by the matrix is n*m i.e. O(N^2).

**Time Complexity:-** O(N^2)

**Space Complexity:-** O(N^2)
