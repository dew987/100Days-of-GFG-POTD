**Approach:-**

Idea is to use a auxillary vector of size N+1 to store the maximum length increasing subsequence that can be formed.

**Steps:-**
1. Create a vector of size N+1 and initially initialize all the elements as 10^9(maximum integer value). Initialize the 0th element as -1 i.e.  subseuqence of size 0 is not possible :)
2. Iterate i= 0 to i= N-1,
    
    a) Find lower bound in vector from begin to end with a[i] and subtract first element of vector from it. Store it in variable p.
    
    b) If p is less than N+1 then, set element of vector at index p as a[i].
3. Iterate i= n to i= 0,
   
   If element of vector at index i is not equal to 10^9 i.e. we have found the subsequence of that length then return the i.

Iteration of O(N) is performed and each time we are fetching the lower bound from the vector takes logN time.

Space is required to store the length of O(N).

**Time Complexity:-** O(N*log(N))

**Space Complexity:-** O(N)
