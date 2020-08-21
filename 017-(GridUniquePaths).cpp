// Method-1 Using formula.
/*

Time complexity : O(n)
Space complexity :O(1)
*/

This is a combinatorial problem and can be solved without DP. For mxn grid, robot has to move exactly m-1 steps down and n-1 steps right and these can be done in any order.
For the eg., given in question, 3x7 matrix, robot needs to take 2+6 = 8 steps with 2 down and 6 right in any order. That is nothing but a permutation problem.
Denote down as 'D' and right as 'R', following is one of the path :-
D R R R D R R R
We have to tell the total number of permutations of the above given word. So, decrease both m & n by 1 and apply following formula:-
Total permutations = (m+n)! / (m! * n!)


public class Solution {
    public int uniquePaths(int m, int n) {
        if(m == 1 || n == 1)
            return 1;
        m--;
        n--;
        if(m < n) {              // Swap, so that m is the bigger number
            m = m + n;
            n = m - n;
            m = m - n;
        }
        long res = 1;
        int j = 1;
        for(int i = m+1; i <= m+n; i++, j++){       // Instead of taking factorial, keep on multiply & divide
            res *= i;
            res /= j;
        }
            
        return (int)res;
    }
}

//Method-2 Using dp
/*
 Time : O(n*m)
 Space : O(n*m)
 */
class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        for(int j=0;j<n;j++)
            dp[0][j]=1;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        for(int i=0;i<m;i++)
        { for(int j=0;j<n;j++)
                 cout<<dp[i][j]<<" ";
         cout<<endl;
        }
           
        
        return dp[m-1][n-1];
    }
};
