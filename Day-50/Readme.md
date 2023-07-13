**Approach:-**

In transpose of a matrix, rows become column and column becomes rows.

This can be acheived by swapping all the row element before the main diagonal elements with respective column elements i.e. swapping arr[i][j] with arr[j][i].

1. Traverse through all the rows using variable i.
2. Traverse through all the columns using variable j.
3. If i<j then swap arr[i][j] and arr[j][i] i.e. swapping elements before main diagonal elements.

**Time Complexity:-** O(n^2)

**Space Complexity:-** O(1)
