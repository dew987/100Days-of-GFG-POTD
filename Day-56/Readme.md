**Approach:-**

Task is to reverse the queue.

This can be acheived using a stack to temporarily store the elements of the queue.

**Steps:-**
1. Create a stack.
2. Pop sequentially all the elements from the queue and push them in the stack.
3. Pop sequentially all the elements from the stack and push them in the queue back.

The Time comsumed for reversal is O(N).

The Space consumed for stack is O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
