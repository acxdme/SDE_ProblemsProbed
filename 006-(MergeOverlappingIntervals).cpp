/*
Time complexity : O(N)
Space complexity : O(N)
My approach : So, what is the basic condition to merge? Figure this and you are good to go.
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        vector<vector<int>> answer;
        if(n==0 )
            return answer;
        sort(intervals.begin(),intervals.end());
        vector<int> temp= intervals[0];

        for(int i=1;i<n;i++)
        {
            if(temp[1] >= intervals[i][0] )
                temp[1]=max(temp[1],intervals[i][1]);
            else
            {
                
                answer.push_back(temp);
                
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }  
        }
        
        answer.push_back(temp);
     return answer;   
    }
};
