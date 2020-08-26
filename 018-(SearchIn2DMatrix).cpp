/*
Time complexity : O()
Space complexity : O(1)
My approach : start from the 1st row's last column and move down if the target is greater otherwise move leftward in that row , return true if target value is found otherwise if
it moves out of array bound return false
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
       int r=matrix.size();
       if(r==0)
           return false;
       int c=matrix[0].size();

        int i=0,j=c-1;
       while(i<r and j>=0)
       {
           if(matrix[i][j]==target)
               return true;
           if(target > matrix[i][j])
               i++;
           else
               j--;
               
       }
        
        return false;
    }
};
