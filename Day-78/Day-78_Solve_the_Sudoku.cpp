//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isSafe(int grid[N][N], int i, int j, int num)
    {
        int flag= true;
        //finding in the num in the current row
        for(int k= 0; k<N; k++)
        {
            if(grid[i][k]== num)
                flag= false;
        }
        
        //finding the num in the current column
        for(int k= 0; k<N; k++)
        {
            if(grid[k][j]== num)
                flag= false;
        }
        
        //finding the num in the current grid
        for(int k= 0; k<N; k++)
        {
            if(grid[3*(i/3) + k/3][3*(j/3)+ k%3]== num)
                flag= false;
            
        }
        return flag;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        for(int i= 0; i<N; i++)
        {
            for(int j= 0; j<N; j++)
            {
                //if the grid is empty
                if(grid[i][j]== 0)
                {
                    for(int num= 1; num<=9; num++)
                    {
                        
                        if(isSafe(grid, i, j, num)== true)
                        {
                            grid[i][j]= num;
                            
                            bool aageSolutionPossible= SolveSudoku(grid);
                            if(aageSolutionPossible)
                            {
                                return true;
                            }
                            else
                            {
                                //backtracking
                                grid[i][j]= 0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i= 0; i<N; i++)
        {
            for(int j= 0; j<N; j++)
            {
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends