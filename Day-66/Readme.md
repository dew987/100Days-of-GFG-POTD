**Approach:-**

Approach is to store the mapping of child to parent with the help of map and using this mapping to retreive the parent of an child node.

**Steps:-**
1. Create a map to store the mapping of child to their parent in a ordered map.
2. Find the Node with the given data.
3. Using loop of order k find the ancestor of node using the mapping.

The retrieval of mapping from the map takes O(logn) time where n is the number of elements in the map.

Creation and storing of map consumes O(N) time and O(N) space.

Searching of node with given data consumes O(N) time.

Finding ancestor takes O(k*log(N)) time.

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
