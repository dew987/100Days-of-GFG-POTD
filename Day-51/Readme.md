**Approach:-**

Approach is to maintain variables startRow, startCol, endRow and endCol to change the starting row, starting column, ending row and ending column respectively.

Using count variable we keep track of count and when count>=k then we have to return the value of that element.

1. While count is less than k,
2. Iterate from startCol to endCol on startRow and increament count each time.
3. increament startRow by 1.
4. Iterate from startRow to endRow on endCol and increament count each time.
5. decreament endCol by 1.
6. Iterate from endCol to startCol on endRow and increament count each time.
7. decreament endRow by 1.
8. Iterate from endRow to startRow on startCol and increament count each time.
9. increament startCol by 1.
10. In above steps whenever count==k return the element.

The iteration is performed once on each element hence overall time complexity will be O(n*m).

**Time Complexity:-** O(n*m)

**Space Complexity:-** O(1)