**Approach:-**

**Observations:-**
1) There are 2 cases- Incremental and Decremental.
2) In increamental case we check from n/2 to n-1 with the left side part of palindrome. ans we just need to increament just a element in right side of palindrome by 1 and the next elements copy paste as of the left palindrome.
3) In decreamental case we have to use carry and make changes in left part of palindrome and then right side of palindrome.

**Steps:-**
1. Create a vector to store the answer.
2. Iterate from i= n/2 to i= n-1,
    
    a) If a[i] is less than a[n-i-1] then set a[i] as a[n-i-1] and copy all elements from the back to make a palindrome. set solved as true and break the loop.
    
    b) If a[i] is greater than a[n-i-1] then break i.e. if the case is not increamental.
3. If solved is set to true i.e. case was increamental then push the elements in the answer and return the answer.
4. Set carry as 1. Iterate from i= (n-1)/2 to i= 0,
   
    a) If a[i]+ carry is 10 i.e. we have to carry on this carry then, set a[i] as 0 and carry as 1.
   
    b) Else increamnt a[i] and set carry as 0 and break i.e. we have successfully modified the palindrome left side.
5. If carry is still 1 then push 1 in the answer.
6. Push the elements of the array a in the answer.
7. If carry is still 1 then increament n.
8. Iterate from i= (n+1)/2 to i= n-1,
    
    a) set ans[i] as ans[n-i-1] i.e. copy the elements of the left part of palindrome to the right part of palindrome to make the whole array palindrome.
9. Return the answer.

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)