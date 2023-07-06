**Approach:-**

Quick Sort is a sorting algorithm based on divide and conquer strategy.

**Steps:-**
1. Select a pivot element(can be first, last or middle element) and sort the elements less than pivot to the left of pivot and elements greater than pivot to the right of the pivot. Reaturn the neww index of pivot element.
2. Call QuickSort for the subarray low to partition-1 recursively.
3. Call Quicksort for the subarray partition+1 to high.

Iteration is being performed logN times and each iteration takes N time so overall time taken is O(N*logN).

The Quick Sort algorithm takes logN space to store recusive stack tree.

**Time Complexity:-** O(N*log(N))

**Space Complexity:-** O(logN)
