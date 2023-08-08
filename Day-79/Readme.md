**Aprroach:-**

Idea is to make use of map data structure so as to keep track of previous fraction values and if current and previous fraction sum up to 1.

**Steps:-**
1. Create a map of type double, int.
2. Iterate in range 0 to n-1
    
    a) Find the value of denominator[i]-numerator[i]/denominator[i] and store it in a variable val.
    
    b) Find if the val is present in the map, If not then increament of count by mp[val].
    
    c) Increament the value of mp[numerator[i]/denominator[i]] by 1(i.e. increment the count of pair of fraction).
3. Return the count.

The fetching and finding the element from the map takes O(log(N)) times. This process is repeated for O(N) times hence overall Time complexity is O(N*log(N)).

A Space of O(N) is used in this problem to store the fraction value in the form of map.

**Time Complexity:-** O(N*log(N))

**Space Complexity:-** O(N)