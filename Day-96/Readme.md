**Approach:-**

Idea is to use 2 pointer approach to check whether the string is a palindrome or not.

**Steps:-**
1. Create integer variables i and j and set its value to 0 and N-1 respectively.
2. Repeat while i is less than j,
    
    a) If character at index i is not equal to character at index j then return 0(representing string is not plaindrome).

    b) Increament i, decreament j.
3. Return 1(representing string is a plaindrome).

A single iteration of string is required hence time taken is O(N).

No extra space required.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)