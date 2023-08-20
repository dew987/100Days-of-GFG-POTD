**Approach:-**

Brute force approach is to do linear serach and find starting and ending of occurence of given number x.

Efficient approach is to use binary search to find the first and last occurence of given number x.

**Steps:-**
1. Take 2 variables firstIndex and lastIndex to store the first and last occurence of x in array arr.
2. Take variables i= 0 and j= n-1 representing low and high of binary serach.
3. Iterate while i is less than or equals to j,
    
    a) Find mid.
    
    b) If element at mid is greater than x then update j as mid-1.
    
    c) Else If element at mid is smaller than x then update i as mid+1.
    
    d) Else set firstIndex as mid and update j as mid-1.(This is modified step here we check if there is any previous occurence of x)
4. Update i= 0 and j= n-1.
5. Iterate while i is less than or      equals to j,
    
    a) Find mid.
    
    b) If element at mid is greater than x then update j as mid-1.
    
    c) Else If element at mid is smaller than x then update i as mid+1.
    
    d) Else set lastIndex as mid and update i as mid+1.(This is modified step here we check if there is any next occurence of x)
6. If firstIndex is not modified then return 0 else return lastIndex-firstIndex+1.

We are performing modified form of binary search twice hence overall time taken is O(log(N)).

No extra space is needed to find the occurences.

**Time Complexity:-** O(log(N))

**Space Complexity:-** O(1)