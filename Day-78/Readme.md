**Approach:-**

Idea is to use backtracking approach to explore all the possible values for the blank places in sudoku in order to solve it.

Backtracking approach requires a recursive function.

**Steps:-**
1. Iterate in the sudoku table and whenever encounter a blank space i.e. 0 then Go to step 2.
2. Iterate for num= 1 to num= 9 and check for each num that we can place it in the vaccant space by checking the row, column and current grid elements.
3. If num is not present then place the num in the vaccant space. Call the function SolveSudoku recursively with this placed element.
4. Check the boolean value returned by the recursive function, if it is true then return true else, backtrack by setting the current element back to 0.
5. If the num is not set from 1 to 9 then return false representing that their is no solution.
6. If all the spaces are filled with correct values i.e. the 9*9 grid is completely traversed then return true.

The time complexity of this backtracking approach is (9^N*N).

**Time Complexity:-** O(9^N*N)

**Space Compleixty:-** O(N*N)