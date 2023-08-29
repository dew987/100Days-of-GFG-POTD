**Approach:-**

Idea is to reverse the linked list, traverse the linked list and delete the particular node if maximum value obtained till that node is greater than that node, at last again reverse the linked list.

**Steps:-**
1. Reverse the linked list.
2. Create curr and prev Node pointers which point to head's next and head respectively. Also maintain a maximum variable(to store maximum value of node obtained till that node) and initialize it with head's data.
3. Iterate while curr is not equal to nullptr,
    
    a) If curr's data is less than maximum(i.e. the case of deletion) then, 
    
        - set prev's next as curr's next
    
        - delete curr
    
        - set curr as prev's next
    
    b) Else,
        
        - set maximum as curr's data
        
        - set prev as curr
        
        - set curr as curr's data
4. Reverse the linked list.
5. Return the head pointer.

We are iterating in the linked list hence the overall time taken is O(N).

No extra space is required to solve the problem hence space taken is constant.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)