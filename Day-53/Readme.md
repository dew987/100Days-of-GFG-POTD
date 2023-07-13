**Approach:-**

Approach is to first map the count of each unique element and then check the uniquness of count using set.

**Steps:-**
1. Iterate over the array and store the frequency of each item in the map.
2. Iterate over the map and store the frequency in the set using insert() function and whenever the element to be inserted is already present(meaning frequency same) then return false.
3. If map iterated completely then return true(representing frequency is different for each element).

We are Iterating once over array and map and hence time complexity becomes O(N).

Space of O(N) is taken to store the map and set data structures.

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)