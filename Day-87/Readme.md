**Approach:-**

**Catalan Series:-** 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862,.....

The idea is to calculate the catalan number using the concept of binary search trees and the count of distinct binary search trees.

Actually, for the given value n, the catalan number value will be equal to the number of distinct binary search trees that can be formed with n nodes.

**Steps:-**
1. Make a vector catalan of size n+1 and initialize all the elements of that vector as 0's. This vector represents the catalan number for respective value.
2. Make catalan at 0th ans 1st index 1 i.e. there is only 1 way to form the tree.
3. Iterate from i= 2 to i= n,
   
    a) Iterate from j= 0 to j= i-1,
   
        Increament value of catalan at index i by multiplication of catalan at index j and catalan at index i-j-1, i.e. catalan[i]+= catalan[j]*catalan[i-j-1].
4. Return the catalan number for the value n using the vector.

The calculations are made using the integer, hence taking mod of 1e9+7 is important.

We need to perform calculation using nested for loops of O(N) each hence the overall time taken to solve this problem is O(N^2).

The space of O(N) is required to store the values of lower catalan numbers i.e. subproblems.

**Time Complexity:-** O(N^2)

**Space Complexity:-** O(N)

