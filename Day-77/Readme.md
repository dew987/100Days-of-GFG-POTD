**Approach:-**

Idea is to use backtracking algorithm to find all the permutations of a string. Backtracking algorithm make use of recursion to find all possible permutations.

**Steps for findPermutation:-**
1. If index is equal to the length of string,

    a) Push the current string in the ans vector.

    b) Return the function call.
2. Iterate i from index to length of string-1,

    a)Swap string[i] and string[index].

    b)Call findPermutation recursively for index+1.

    c)Swap string[i] and string[index].
3. Return

**Steps for permutation:-**
1. Call findPermutation function by passing empty vector of type string ans, input string and 0.
2. Sort the vector ans(so that the permutations of strings are arranged alphabetically).
3. Return the vector ans.

**Time Complexity:-** (N*N!)

**Space Complexity:-** O(1)
