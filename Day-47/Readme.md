**Approach:-**

Intution is to set pointer at last index of first array and at first index of second array and until the element at the index pointed by first pointer is less than index pointed by the second pointer, swap both the elements and increament-decreament the pointers.

1. If the arr1[n-1] is less than or equals to arr2[0] that means arrays are in proper order hence return.
2. Set i as n-1 and j as 0 representing last index of first array and first index of second array.
3. While i>=0 and j<m,

   a) If arr1[i]> arr2[j], swap arr1[i] and arr2[j], increament i and increament j.

   //Above condition represents the element should be in second array instead of the first one.

   b) Else, break.
   
   //Above condition represents arr1[i]<=arr2[j] which is the condition where array elements are in proper arrays.
   
5. Sort the arr1.
6. Sort the arr2.

**Time Complexity:-** O((n+m)+nlogn+mlogm)

**Space Complexity:-** O(1)
