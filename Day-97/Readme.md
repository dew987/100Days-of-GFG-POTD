**Approach:-**

We need to find the maximum length substring containing k unique characters.

The problem is a standard application of Sliding Window algorithm.

Here to store the unique characters a map can be used.

**Steps:-**
1. Set start pointing variable i initially as 0 (representing start of the substring).
2. Create varaible maxLength to store the length maximum length substring. Also create a map mp of type char, int.
3. Iterate j for j= 0 to j= |S|-1,
    
    a) Increament count of character at index j in string S in the map.
    
    b) Calculate the size of map and store it in calculateDistinct(i.e. size of map is no. of unique characters).
    
    c) If calculateDistinct is greater than k,
    
        - Iterate while size of map is greater than k,
    
        - Decreaemnt the count of character at index i in string S in the map.
    
        - If count of occurence of element at index i in string S in the map is 0(i.e. no occurence in substring) then erase it from the map.
    
        - Increament the index i. 
    
    d) If calculateDistinct is equals to k then, update maxLength as maximum of maxLength and j-i+1.
4. Return the maxLength.

Iteration is performed only once over the string hence overall time complexity is O(|S|).

The space taken is maximum O(k) since map cannot be greater than size k.

**Time Complexity:-** O(|S|)

**Space Complexity:-** O(|S|)