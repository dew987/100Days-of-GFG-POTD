**Approach:-**

This question is a implementation of kadence algorithm. Here we have to maximize the count of zeros in a subarray where the count of 1 is less than 0s.

**Steps:-**
1. Use variable count(to store the count the 1 set elements in the answer), maxflip and currflip.
2. Iterate from i= 0 to i= N-1,
   
   a) If element at index i is set to 0 i.e. there is a gain, so increament currflip by 1.
   
   b) If element at index i is set to 1 i.e. there is a loss, so decreament currflip by 1 only if currflip is greater than 1.
   
   c) set maxflip as maximum of maxflip and currflip.
   
   (currflip represents the maximum flips we can make in order to maximize the number of 1s)

3. Add maxflip to the count.
4. Iterate from i= 0 to i= N-1 and add the elements which are having value 1 in the count.
5. Return count

We are just finding gain and loss using the first traversal of O(N) time and then adding the 1 set elements in next traversal of O(N) time hence overall time complexity is O(N).

No extra space is required in this approach.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)