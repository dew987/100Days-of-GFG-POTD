**Approach:-**

**Observations:-**
1. There are maximum n-1 edges in a tree containing n nodes.
2. We have to include only those elements whose degree is 1 except for the case of the centre(ring node).

Whenever degree 1 for a node is encountered then decreament the ans by 1(degree 1 node is already a part of ring)

**Steps:-**
1. Create a degree vector of size N+1 and initialize all the elements of vector as 0's(This vector represents the degree of the nodes of the tree).
2. Create a ans variable and initialize it as N-1(maximum no. of edges possible).
3. Iterate for i= 0 to i= N-1,
    
    a) Increament the degree of element at index p[i] i.e. increament degree[p[i]].
    
    b) Increament the degree of element at index i i.e. increament degree[i].
4. Iterate for i= 0 to i= N-1,
    
    a) If degree of element at index i is equals to 1 then decreament ans.
5. If ans is less than 0 then return 0.
6. Return the ans.

A single iteration is required to solve the problem efficiently hence time taken is O(N).

The space is taken to store the degrees of the elements in the tree hence the space taken is O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)