**Approach:-**

Height of the tree is the maximum length path from root node to the leaf node.

We can use recursion to calculate the height of the binary tree.

1. Base condition would be if(root== NULL).

2. The logic of recursion is 1+ maximum of height of left subtree and height of right subtree, where 1 is the current node.


The recursive solution takes O(N) time as each element is traversed once.

The recursion uses stack space of height of the binary tree i.e. O(log(N)).

**Time Complexity:-** O(N)

**Space Complexity:-** O(height of the tree)
