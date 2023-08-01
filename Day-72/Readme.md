**Approach:-**

Depth First Search is a standard graph traversal algorithm.
It uses Recursion stack to traverse the elements of the graph.
In depth first search we traverse the elements in depth manner.

**Steps for dfs function:-**
1. if node is already visited then return.
2. mark visited of node as true and push the current node in the answer.
3. for all the adjacent nodes of current node,
    if they are not visited then, call dfs for each of them recursively.
4. Return

Above dfs function uses visited array to keep track of nodes visited until now, an adjacency list to traverse the graph and ans vector to store the elements which are to be returned.

The overall time complexity comes out to be O(V+E).

The overall space complexity comes out to be O(V).

**Time Complexity:-** O(V+E)

**Space Complexity:-** O(v)