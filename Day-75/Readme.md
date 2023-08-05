**Approach:-**

Approach is to use a queue to temporarily store the elements of the stack in the process of reversal of the stack.

**Steps:-**
1. Create a queue of type integer.
2. While stack is not empty,

    a) push the top element of the stack in the queue.

    b) pop the element from the stack.
3. While queue is not empty,

    a) push the front element of the queue in the stack.

    b) pop the element from the queue.
4. The stack is reversed!!!

Traversal of stack and queue containing N elements takes O(N) time complexity.

Extra space complexity of O(N) is used for storing the elements in the queue.


**Time Complexity:-** O(N)

**Space Complexity:-** O(N)

