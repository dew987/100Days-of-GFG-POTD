**Approach:-**

Heap Sort is a standard sorting algorithm. It is based on the concept of heap.

It consists of heapify method, build heap method and heapsort method to successfully sort the elements of the array.

**Steps for Heapify Method:-**
1. Find the left and right child of current element i using using 2*i+1 and 2*i+2.
2. Swap the maximum among them with the current element i and call heapify method recursively for the left of right affected subtree.

**Steps for buildHeap Method:-**
1. BuildHeap method uses heapify internally to build the heap. All non-leaf nodes need to be traversed.
2. Traverse from i= n/2-1 to i= 0 and call heapify for each element.

**Steps for heapSort Method:-**
1. Call buildHeap method
2. Iterate from n-1 to 1 and each step swap the 0th index element of array with the last element of heap(where 0th index element represents the maximum element in case of max heap) and call heapify method for index 0 and reduce the size of heap.


Heapify Method takes logN time to rearrange the heap. BuildHeap method of O(N), calls heapify in each iteration so overall t.c. comes out to be O(N*log(N)).

The space needed is constant.

**Time Complexity:-** O(N*log(N))

**Space Complexity:-** O(1)