**Approach:-**

**Chocolate Distribution Problem**

Approach is to sort the packets according to the number of chocolates inside them.

Using Sliding window to find the maximum - minimum for each window of given size M.

**Steps:-**
1. Sort the chocolate packets vector according to the number of chocolates inside them.
2. Take a variable ans and set it as Long long max.
3. Set i to 0 and j as m-1.
4. Iterate while j is less than n(i.e. no of packets),
    
    a) if the starting packet has non zero chocolates and maximum-minimum(a[j]-a[i]) chocolates is less than ans then update ans as maximum-minimum(a[j]-a[i]).
    
    b) Increament i.
    
    c) Increament j.
5. Return ans 

The sort function of stl takes O(N*logN) time and iteration takes O(N) time so the overall time complexity is O(N*logN).

No extra space is used for Chocolate distribution.

**Time Complexity:-** O(N*logN)

**Space Complexity:-** O(1)