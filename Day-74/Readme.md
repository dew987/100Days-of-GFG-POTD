**Approach:-**

Approach is to use the topological sort to sort the elements in the topological order(Topological sort is sorting the nodes according the indegree of nodes).

Use topological ordering to find the minimum distance to reach a node.

**Steps:-**
1. Find the topological ordering of the nodes of the graph and store it in the topo vector.
3. Create a dist vector of size N and set all elements as 10^8(max value).
4. Iterate for all the elements in the graph,

    a)Iterate for all the edges in the graph,

    i)If the edges[j][0] is equal to the topo[i] and (dist[edges[j][0]]+edges[j][2])< dist[edges[j][1]] then set dist[edges[j][1]]= dist[edges[j][0]]+ edges[j][2].(i.e. if minimum distance is found then update the distance).
5. Iterate in the dist vector and if any element is still 10^8 then set it to -1(i.e. it is unreachable).
6. Return the dist vector.

**Time Complexity:-** O(N+M)

**Space Complexity:-** O(N)