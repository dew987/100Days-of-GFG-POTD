**Approach:-**

Idea is to use the concept of dynamic programming by storing intermediate results for sum less than target sum.

The dp[i][j] entry represents the number of combinations to make a sum of j using the first i+1 coins. The final answer is stored in dp[N-1][sum], where N is the total number of coins and sum is the target sum.

**Steps:-**
1. Create a vector of type vector named dp of size N where each row is of size sum+1. Initialize all the elements as 1.
2. Iterate for i= 0 to i= n-1,
3. Iterate for j= 1 to j= sum,
4. Use include and notinclude variable to store the include and notinclude count. include is ways for getting sum j-coins[i] with i+1 coins and notinclude is ways for getting sum j with i coins.
5. Return dp[N-1][sum] i.e. getting sum with N coins.

**Time Complexity:-** O(sum*N)

**Space Complexiy:-** O(sum)