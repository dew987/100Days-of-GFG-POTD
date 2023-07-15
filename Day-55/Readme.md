**Approach:-**

Approach is to store the half the elements of the main stack in the temporary stack, delete the middle element from the main stack and then pushing the stored half elements back in the main stack.

**Steps:-**
1. Calculate the elements to be removed from main stack by sizeofstack- ceil(sizeofstack+1/2) formula.
2. Push this elements from the main stack to temporary stack and pop them from main stack.
3. Pop middle element from main stack.
4. Push the elements from temporary stack back in main stack and pop them from temporary stack.

We are iterating over the stack in 1 loop only hence time will be O(N).

Use of temporary stack makes space O(N/2) ~= O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N/2)
