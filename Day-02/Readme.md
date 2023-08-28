**Approach:-**

Idea is to iterate on both the arrays using indices and make use of recursion to solve the problem.

**Steps for constructBinaryTree Function:-**
1. Initialize variable i(stores root index in preOrder traversal) with 0 and j(stores last index of MirrorPreOrder traversal) with n-1.
2. Call the construct Function which returns root of the constructed tree.
3. Return the root of the constructed tree.

**Steps for construct Function:-**
1. Check if i is equal to 0, if yes then create a new node with data pre[i] and initialize current with that node.
2. If current's data is not equal to preMirror[j] then,

    a) Increament index of i , set current's left as a new node with data pre[i] and call construct with current's left recursively.
    
    b) Increament index of i, set current's right as a new node with data pre[i] and call construct with current's right recursively.
3. Decreament the count of j.

Overall time taken to solve this problem is O(N^2).

The space taken to solve this problem is O(N).

**Time Complexity:-** O(N^2)

**Space Complexity:-** O(N)