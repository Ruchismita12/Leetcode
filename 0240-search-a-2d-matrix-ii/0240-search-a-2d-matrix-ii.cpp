class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // In this problem, we cant use binary search as on converting 2D to 1D , it becomes
        //1 4 7 11 15 2 5 8 12 19 3 6 9.......{Not in sorted manner}

        int rows=matrix.size();
        int cols=matrix[0].size();

        int rowIndex=0;
        int colIndex=cols-1;
        while(rowIndex<rows && colIndex>=0)
        {
            int element=matrix[rowIndex][colIndex];  //we have to start from the last element of first row and keep on checking.

            if(element==target)
            {
                return 1;
            }
            if(element<target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }

        }
        return 0;
        
    }
};