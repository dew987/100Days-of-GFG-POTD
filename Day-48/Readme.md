**Approach:-**

This question is based on Pair with Sum problem whose efficient solution requires 2 pointer approach.

Setting i and j pointer to starting and ending index of the sorted array, if the sum of element at i and j is less than required sum then increament i, else if the sum is greater than required sum then decreament j, else the sum is equal to the required sum.

This question follows similar approach.


**Steps:-**
1. Sort the Array.
2. Traverse from i= 1 to i= n-3, set low= i+1 and high= n-1, using 2 pointer approach find the sum of the triplet(arr[i], arr[low], arr[high]) . 

    a) If the sum is 0, return true.

   b) Else if the sum is less than 0, increament low.

   c) Else, increament high.
4. If the control reaches here, it means there is no triplet with sum 0 hence return 0.
    
**Time Complexity:-** O(N^2)

**Space Complexity:-** O(1)
