/*
Time complexity : O(n*m)
Space complexity :O(n+m)
My approach : Use can use set to store which row and column positions have a zero.Now iterate over them to modify the matrix.(You may also use boolean array to mark true if a row
or column is containing zero or not.)
*/
 
class Solution {            //using unordered set.
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> col;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
       
      for(auto it : row )
      {
          for(int j=0;j<m;j++)
              matrix[it][j]=0;
      }
      
     for(auto it : col)
     {
         for(int i=0;i<n;i++)
             matrix[i][it]=0;
     }
        
    }
};



/*
second approach  : Using 1st row and column as indicator elements.
O(1) space and O(N) time
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int r1=-1,c1=-1;
        for(int j=0;j<m;j++)
            if(matrix[0][j]==0) r1=1;
        for(int i=0;i<n;i++)
             if(matrix[i][0]==0) c1=1;
     
      for(int i=1;i<n;i++)
      {
          for(int j=1;j<m;j++)
          {
              if(matrix[i][j]==0) 
              {
                  matrix[i][0]=0;
                  matrix[0][j]=0;
              }
          }
      }
    
      for(int i=1;i<n;i++)
      {
          if(matrix[i][0]==0)
          {
              for(int j=1;j<m;j++)
                  matrix[i][j]=0;
          }
      }
      
      for(int j=1;j<m;j++)
      {
          if(matrix[0][j]==0)
          {
              for(int i=1;i<n;i++)
                  matrix[i][j]=0;   
          }
      }
    
        if(r1==1)
            for(int j=0;j<m;j++) matrix[0][j]=0;
        if(c1==1)
            for(int i=0;i<n;i++) matrix[i][0]=0;
        
    }
};
