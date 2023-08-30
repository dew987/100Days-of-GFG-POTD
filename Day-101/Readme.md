**Approach:-**

Idea is to use 2 pointers i.e. curr and prev pointers to traverse and delete the node with given position x.

**Steps:-**
1. Create a variable i to store the value of current position of the pointer.
2. Create Node pointers p and q and points to null and head respectively.
3. Iterate while i is less than x and p is not equals to nullptr,
    
    - Set q as p.
    
    - Set p as p's next.
    
    - increament i.
4. If q is equal to nullptr then return head's next.
5. Set q's next as p's next.
6. Delete content at p and Return the head.

A single iteration to find position is required to delete the element in singly linked list hence time taken is O(N).

The space taken to solve the problem is O(1).

**Time Complexity:-** O(N)  

**Space Complexity:-** O(1)