**Approach:-**

Idea is to traverse in all eight directions from each posiion in the matrix.

Eight positions are left, upleft, up, upright, right, downright, down and downleft.

The wordInDirection is a recursive function to find wether the word is present in the grid given xinc and yinc.

**Steps for wordInDirection function:-**
1. If index is equal to the word length then return true(i.e. word found in the grid).
2. If i and j indices are out of range then return false.
3. If grid[i][j] is equal to word[index] i.e. current character matched then, return a call for wordInDirection function for increamented index by 1 and increamented i and j by xinc and yinc. Else return false.


**Steps for serachWord function:-**
1. Create a vector of vector ans to store the answer pairs.
2. n and m set as rows and columns in the grid.
3. If word length is greater than either of n or m then return ans(i.e. no pair possible).
4. Iterate i in range i= 0 to i= n-1,
    
    Iterate j in range j= 0 to j= n-1,
    
        a) Call wordInDirection function for left direction by passing xinc and yinc as 0, -1.
        
        b) Call wordInDirection function for upleft direction by passing xinc and yinc as -1, -1.
        
        c) Call wordInDirection function for up direction by passing xinc and yinc as -1, 0.
        
        d) Call wordInDirection function for upright direction by passing xinc and yinc as -1, +1.
        
        e) Call wordInDirection function for right direction by passing xinc and yinc as 0, +1.
        
        f) Call wordInDirection function for downright direction by passing xinc and yinc as +1, +1.
        
        g) Call wordInDirection function for down direction by passing xinc and yinc as +1, 0.
        
        h) Call wordInDirection function for downleft direction by passing xinc and yinc as +1, -1.
        
        i) If either of a, b, c, d, e, f, g, h is true then add the pair {i, j} in the ans.
5. Return the ans.

For each element of matrix, we are going in eight directions each of maximum size k(length of word) hence overall time taken is O(n * m * 8 * k).

No extra space taken other than that of recursive calls, if it is considered then space taken is O(k) else it is O(1).

**Time Compllexity:-** O(n * m * 8 * k)

**Space Complexity:-** O(1)