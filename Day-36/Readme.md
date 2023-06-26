**Approach:-**

This question makes use of Pascal's Triangle:-
    
              1                    n= 0
              
             / \
           
            1   1                  n= 1 
           
           / \ / \
          
          1   2   1                n= 2 
         
         / \ / \ / \
        
        1   3   3   1              n= 3
       
       / \ / \ / \ / \
      
      1   4   6   4   1            n= 4
     
     / \ / \ / \ / \ / \
     
     1  5   10  10  5   1          n= 5

1. Make an array arr of size r+1
2. Check if n is less than k if yes, then return 0
3. Set r as min(r, n-r) (since, nCr= nCn-r)
4. Iterate i from 1 to n, update the values of the indices of the array in each iteration from min(r, i) to 1.
5. Return the value at arr[r]


This program uses the concept of dynamic programming since we are using the previous values of n from pascal's triangle.

Program iterating n times and each iteration takes at max r time so time complexity is O(n*r).

An array is used to store the values of size r+1 so the space complexity is O(r).

**Time Complexity:-** O(n*r)

**Space Complexity:-** O(r)
