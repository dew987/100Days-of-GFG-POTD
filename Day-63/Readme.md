**Approach:-**

Approach is to make a new linked list using the old linked list using 3 traversals by removing the elements from the old linked list.

**Steps:-**
1. Create dummy1 and dummy2 node pointer pointing to node with data -1 and -1 respectively.
2. set dummy1->next as head and head as dummy1. Set Node pointer sorted as dummy2(representing the last node in new linked list).
3. Traverse the linked list from left to right and whenever encounter a node with data i then add that node in new linked list and delete it from old linked list.
4. Do step 3 from i= 0, i=1 and i=2.
5. Return dummy2->next.(head of the new linked list)

The time taken would be the 3 traversals of time 3*O(N).

As we are using the elements from the old linked list only hence the space complexity would be O(1).

**Time Complexity:-** O(N)

**Space Complexiy:-** O(1)