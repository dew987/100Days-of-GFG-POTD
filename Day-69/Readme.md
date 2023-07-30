**Approach:-**

Approach is to do inorder traversal of BST since inorder traversal of BST gives sorted elements.

- We have to just sum up the median elemnts and divide by 2 if N is even.
- We have to just return the median elemnt if N is odd.

**Steps:-**
1. Count the number of nodes in the tree.
2. Do inorder traversal of the BST, use a flag variable to set it when current element is middle(odd) or middle elements(even).
3. use float a and float b variables to take the element from left and right subtree(median elements).
4. Return a+b/2 if N is even, Return root->data if N is odd.

Time Complexity if O(N) since we are iterating over the tree.

Space Complexity if O(Height of the BST) as stack tree space.

**Time Complexity:-** O(N)

**Space Complexity:-** O(Height of the BST)
