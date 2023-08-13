**Approach:-**

Idea is to use memoization to store the results of subproblems and use those results to solve bigger problem i.e. Dynamic Programming.

Create a vector arr of size N+1 to store the values of intermediate results obtained while recursive function calls. Initialize all the elements as -1.
**Steps for Recursive Fibbonaci function:-**
1. If the value of element at index n in the vector arr is not -1 i.e. we already have solution to the subproblem then return the value at index n.
2. If n is 0 or 1 then initialize the element at index n as n. Also return n.
3. The fibonacci number at index n is sum of fibonacci of n-1 and fibonacci of n-2. Store sum in element at index n.
4. Return the elementt at index n.

The recursive stack that is build up would be maximum O(N).

We used auxillary vector/array of N+1 size to store the results hence the space used is O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)