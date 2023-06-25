
**Approach:-**

Each row contains a set of 0's and 1's we can convert each row to string and check its occurence previously, if not then push that row in the answer vector.

1. Create a map of string and its count(occurence).

2. Iterating over each row, check if it already occured, if not then push that row in answer and also increament the count of that row(string form) so that it can't be pushed in any further iterations.

3. Return the answer vector.

Time for iterating a matrix is O(row * col).

Extra space for storing the answer(O(row * col)) and map(O(row)) is needed.

**Time Complexity:-** O(row * col)
**Space Complexity:-** O(row * col)
