/*
Time complexity  : O(n^2) 
Space complexity : O(n^2) because here we have to give the complete triangle formation as vector of vectors.
My approach : Notice that the first and last element for a given level is always 1, the remaining elements are sum of the two above elements.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
       vector<vector<int>> answer;
        if(numRows==0)
            return answer;
        for(int i=1;i<=numRows;i++)  //1   2    3      4         5
        {
            vector<int> v; 
            for(int j=0;j<i;j++)    //0 , 0 1 ,0 1 2 , 0 1 2 3 , 0 1 2 3 4 
            { 
                
                if(j==0 or j==i-1)
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(answer[i-2][j]+answer[i-2][j-1]);
                }
                
                
            }
            answer.push_back(v);
        }
      return answer;  
    }
};
