**Approach:-**

Idea is to maintain a current maximum variable and traverse the array from right to left and update the current maximum accordingly. If current maximum is not updated(i.e. the element was smaller than current maximum) then set that element as -1.
At last include all the elements in the answer vector which are not negative.

**Steps:-**
1. Take a variable currentMax ans set to -1. Also make a vector answer of integer datatype.
2. Iterate from i= n-1 to i= 0,
    
    a) If arr[i] is greater than or equals to currentMax i.e. it is a leader then set currentMax as arr[i].
    
    b) Else set arr[i] as -1 i.e. arr[i] is not a leader.
3. Iterate from i= 0 to n-1,
    
    a) If arr[i] is not equal to -1 then push arr[i] in the vector answer.
4. Return the vector answer.

Iteration is performed only twice and each time taking O(N). Hence overall time taken is O(N).

Extra space is not taken other than storing the answer. Hence overall space taken is O(1).

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)