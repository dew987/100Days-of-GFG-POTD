**Approach:-**

Approach is to use a Data structure which can be traversed in both teh directions so that we can go from left->right and right->left alternately in each level of the tree.

Also a flag will be required to keep track of the current level and type of move should be made i.e. left->right or right->left.

**Steps:-**
1. Create a deque of type Node * to store the node in each level in each iteration.
2. Create flag to indicate the type of level and vector to store the answer.
3. Repeat while deque is not empty, 

    Calculate the size of deque.
   
        for each element in deque, 
            
            a) If flag is true, then push elements left and right at the back of the deque. Pop the front element from deque.
            
            b) If flag is false, then push elements right and left at the front of the deque. Pop the last element from the deque.
    negate the flag.
4. Return the answer.

We are iterating only once over the tree hence t.c. is O(N).

The maximum space used be deque would be the number of element at the last level of the tree which would be O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
