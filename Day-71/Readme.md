**Approach:-**

Breadth First Search Traversal is a standard traversal in graph which performs level order traversal in graphs with the help of queue to store the elements.

**Steps:-**
1. Create a visited vector to keep track of which node is visited and which is not.
2. Select a node as the starting point of the traversal (here it is 0). Set it visited and push it into the queue.
3. Fetch the front element of the queue, pop it from the queue and traverse through all the adjacent nodes of the current element, also pushing them in the queue and marking them visited.
4. Repeat step 3 until the queue is empty.

We are iteraing over the elements only once with the help of visited vector hence it is taking O(V+E) time and queue is taking linear space.

**Time Complexity:-** O(V+E)

**Space Complexity:-** O(V)