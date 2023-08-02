**Approach:-**

Approach is to use the concept of breadth first search to find the minimum path from source to destination.

**Steps:-**
1. Create a 2-d matrix of M*N and initialize all the elements of the matrix as 500(max which will not be answer).
2. Create a queue of type pair to store the indices which are in the current path. push the element at source if it is set to 1.
3. Repeat while queue is not empty,
    a) Fetch x and y from the front of the queue and pop the element from the queue.
    b) Find the neigbhouring elements of (x, y) who are set and distance greater than current distance. If yes then update the distance in 2d matrix and push them in the queue.
4. Return the value at the last element of 2d matrix if not 500, else return -1.

**Time Complexity:-** O(N*M)

**Space Complexity:-** O(N*M)