**Approach:-**

Idea is to the concept of xor to find the elements which are unique.

We know xor of 2 same integers is 0. So xor of all the numbers in the nums array will ultimately give xor of the 2 unique elements in the array.

This xor obtained can be used to categorize the elements into 2 groups where both group have only 1 unique element having no pair, so we'll get 1-1 element from 2 groups and hence the 2 unique numbers.

**Steps:-**
1. Create a variable xorNums and store the xor of all the elements of nums in that variable.
2. Finding the 1st set bit in xorNums from the LSB(Least Significant Bit) side. Store it in the shift variable. This will help to categorize the elements of the array in 2 groups.
3. Traverse the the array from i= 0 to i= N-1,
    
    a) If the array element at index i right shift by shift times is set to 1 then xor it with group1.
    
    b) Else xor it with group2.
4. Return group1 and group2 values in ascending order.

Two iterations on the nums array is required to acheive the goal hence overall time complexity comes out to be O(N).

The use of xor saves the space and hence the space in constant.


**Time Complexity:-** O(N) 

**Space Complexity:-** O(1) 