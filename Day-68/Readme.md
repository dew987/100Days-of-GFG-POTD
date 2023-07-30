**Approach:-**

Store all the ancestors of the node n1 in a vector.

Go through all the ancestors of node n2 while traversing the vector of ancestors of n2 and find the last common ancestor among them.

**Steps:-**
1. Create a vector of Node * type and store all the ancestors of the node n1 including the node n1.
2. Search for the node n2 and parallely traverse the vector of Node * which is having the ancestors of n1, the last common element will be the last common ancestor.
3. Return common ancestor.

**Time Complexity:-** O(Height of the BST)

**Space Complexity:-** O(Height of the BST)
