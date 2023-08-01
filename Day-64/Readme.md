**Approach:-**

Right view of binary tree can be found out by just taking the last element at each level of the tree.

**Steps:-**
1. Make a queue of type Node pointer and a vector of int to store the sequence.
2. Push the root element in the queue.
3. take the size of queue in variable n.
4. Iterate from i= 0 to i= n-1,
    Fetch the front element of the queue.
    Pop the element from the queue.
    if i is equal to n-1(i.e. the last element of a level) then, push front's data into the vector.
    Push the left element of front element in the queue if any.
    Push the right element of front element in the queue if any.
5. Repeat steps 3 and 4 if que is not empty.
6. Return the vector.

**Time Complexity:-** O(N)

**Space Complexity:-** O(Height of the Tree)
