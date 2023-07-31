**Approach:-**

Approach is to write a recursive solution to reverse a linked list in groups of given size k.

- Reverse group of size k
- Assign head's next as this next reversed group
- Return last node

**Steps for reverse function:-**
1. If head is NULL then return head.
2. Use Node pointers forward, curr and prev. set curr as head, prev as NULL.
3. reverse Linked list of size k if present. Else reverse Linked list of remaining size. 
4. If forward(next of curr) is not null i.e. linked list is not empty then set head->next= reverse(forward, k);
5. Return prev(represents the last node).

The time taken by the solution is linear i.e. O(N).

The space taken by the solution is constant i.e. O(1) if recursive stack tree space is not considered.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)
