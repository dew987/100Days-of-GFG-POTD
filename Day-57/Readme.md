**Approach:-**

Approach is to use a queue data structure to keep track of the coming unique characters and also storing previous ones.
Also maintaining a hash of 26 for letters to check there occurences.

**Steps:-**
1. Create a array hash of size 26 and initialize them as 0. Create of queue q1 of type char. Create a string str.
2. for i in range 0 to |A|-1,
    - increament hash[A[i]-'a]
    - If hash[A[i]-'a] is equal to 2,
        if front of q1 is equal to A[i] then pop element from q1.
    - Else if hash[A[i]-'a] is equal to 1,
        push the element A[i] in the q1.
    - While q1 is not empty and hash[q1.front()-'a']>1 then, pop queue q1

    - If q1 is empty then push '#' in the string str.
    - Else push front element of queue in the string str.
3. Return the string str.

The traversal of the string takes O(N) time.

The Maximum Space occupied by the queue would be O(N).

**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
