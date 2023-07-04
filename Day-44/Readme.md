**Approach:-**

This problem is an implementation of Sliding Window Algorithm.

1. Use 2 pointers i and j to represent the start and the end of the subarray.
2. In each iteration multiply the element at index j to get current product,
   
     a) If current product is less than K then increament sum(The total subarrays) by (j-i)+1.

     b) Else while product is greater than or equals to K, divide current product by element present at index i and increament i.
4. Return the sum.

The loop is iterating in O(n) time.

The Space taken is constant.

**Time Complexity:-** O(n)

**Space Complexity:-** O(1)
