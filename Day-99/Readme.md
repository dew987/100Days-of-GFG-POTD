**Approach:-**

Idea is to maintain two pointers curr and next to point to the current and next element present in the linked list.

**Steps for removeDuplicates function:-**
1. If head is NULL or head's next is NULL then no need to modify the linked list hence return the head.
2. Create Node pointer curr and next and set them as head and head's next respectively.
3. Iterate while next is not NULL,
   
    a) If curr's data is equal to next's data(i.
    e. the next needs to be removed),
       
        - set curr's next as next's next.
       
        - delete the node who is pointed by next.
       
        - set next as curr's next.
    
    b) Else(curr's data is not equal to next's data),
       
        - set curr as next.
       
        - set next as next's next.
4. Return head.

A single iteration needs to be performed hence overall time taken is O(N).

As no extra space is needed to store intermediate results or calculations the overall space taken is O(1).


**Time Complexity:-** O(N)

**Space Complexity:-** O(1)