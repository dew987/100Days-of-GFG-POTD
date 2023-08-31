**Approach:-**

There are four cases of balancing the avl tree:-

1) LL -> right rotation on pivot A

2) RR -> left rotation on pivot A

3) LR -> left rotation on pivot B and 
then right rotation on pivot A

4) RL -> right rotation on pivot B and then left rotation on pivot A

I used some utility function to calculate the height of the given node, function to getBalance(i.e. calculate diff. in height of left and right child), rightRotate, leftRotate.

I also used minValueNode function which calculates the immediate predecessor of the node to be deleted.

**Steps for deleteNode function:-**
1. If root is NULL then return the root.
2. a) If data is less than root's data(i.e. we need to search in left of root) then call deleteNode with root's left and initialize it with root's left.
   b) If data is greater than root's data(i.e. we need to search in right of root) then call deleteNode with root's right and initialize it with root's right.
   c) Else, (data is equal to root's data) then, 
      * If root's left or root's right is NULL then,
        - Initialize Node pointer temp as root's left or root's right if it exists.
        - If temp is NULL then set temp as root and root as NULL.
        - Else, set value at root as temp.
        - Delete the value of temp.
      *Else,
        - Initialize Node poiner temp as the immediate predecessor using minValueNode function.
        - set root's data as temp's data.
        - call deleteNode for root's right and set returned value to root's right.
3. If root is NULL then return root.
4. Set root's height as 1+ maximum of root's left and root's right height.
5. Find the balance of root using getBalance function.
6. a) If balance is greater than 1 and balnce of root's left is greater than or equals to 0 then, return rightRotate of root.
  b) If balance is greater than -1 and balance of root's right is less than or equals to 0 then, return leftRotate of root.
  c) If balance is greater than 1 and balance of root's left is less than 0 the, call leftRotate and set returned value to root's left, also return rightRotate for root.
  d) If balance is less than -1 and balance of root's right is greater than 0 then, call rightRotate ans set returned value to root's right, also return leftRotate for root.
7. Return root.


**Time Complexity:-** O(Height of tree)

**Space Complexity:-** O(Height of tree)