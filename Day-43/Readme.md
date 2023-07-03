**Approach:-**

Approach is to store the current minimum and current maximum values of array using 2 arrays left and right arrays respectively.

Iterate from range 0 to n-1 and check where j-i is maximum and left[i]<= right[j], update the ans if the previous value of ans is smaller.

Loops of O(N) time complexity are used. Space Complexity O(N) to store the left and right arrays.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)
