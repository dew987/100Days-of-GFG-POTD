**Approach:-**

Approach is to perform inOrder traversal to find the next element in inOrder traversal of the element at Node x.

**Steps:-**
1. Using data of x instead of Node *x.
2. Compare data of x with inOrder element, if inOrder element greater than x then search for root->left.
    Else, search for root->right.
3. Return if root is NULL

**Time Complexity:-** O(log(N))

**Space Complexity:-** O(1)
