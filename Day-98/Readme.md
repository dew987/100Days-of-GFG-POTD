**Approach:-**

Rather than creating a copy and copying the characters of original string in copy string in reverse order, we can reverse the string inplace.

Idea 1: - using reverse function reverse(str.begin(), str.end()).
Idea 2: - Iterate in half of the string and replace the each character with corresponding character from the right of the string.

**Steps:-**
1. Create a variable n and store the length of string str in it.
2. Iterate i for i= 0 to i<n/2,
    
    - Swap str[i] with str[n-i-1](swapping the index from left with corresponding index from right).
3. Return the string str.

Only half iteration of n/2 is performed on the string hence time taken is O(N). 
The operation performed on the string str are inplace hence space taken is O(1).

**Time Complexity:-** O(|S|)

**Space Complexity:-** O(1)