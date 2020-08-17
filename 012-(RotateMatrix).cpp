/*
Time complexity : O(N^2)
Space complexity : O(1)  since arrangement is done in-place
Algo :    Traverse the 2d matrix and swap the non-diagonal elements of the array (keep in mind to swap only once)
          Now swap the colums going inward 
          The resultant matrix is our 90 deg. rotated matrix.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
       int n= matrix.size();
       int m= matrix[0].size();
      for (int i=0;i<n;i++)
      {
          for(int j=i+1;j<m;j++)
          {
              swap(matrix[i][j],matrix[j][i]);
          }
      }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                swap(matrix[i][j],matrix[i][m-j-1]);
            }
        }
        
    }
};
