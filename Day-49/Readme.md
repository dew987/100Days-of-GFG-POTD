**Approach:-**

Approach 1 is to use map but it consumes a space complexity of O(n) to store the copy of elements.

Approach 2is to traverse through the array and whenever we encounter an element in the range 1  to n, place it on its correct position. In next step, traverse again through the array and find the element who is not at its correct position.

**Steps:-**
1. Traverse through the array and whenever encounter an element in the range 1 to n, and element not present at its correct position then swap arr[i] with arr[arr[i]-1].
2. Traverse through the array again and check where arr[i] is not equal to i+1 i.e. position not equals to element, return that position.
3. If position not found return n+1 representing 1 to n elements are present.

**Time Complexity:-** O(n)

**Space Complexity:-** O(1)
