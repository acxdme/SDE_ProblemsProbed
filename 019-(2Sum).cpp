/*
Time complexity : O(nLogn)
Space complexity : O(N)
My approach : There are two optimal methods , one is using unordered/ordered map and other is using two pointer approach.
Resource :https://web.stanford.edu/class/cs9/sample_probs/TwoSum.pdf
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<pair<int,int>> sorted;
         for(int i=0;i<n;i++)
             sorted.push_back({nums[i],i});
        vector<int> answer;
        sort(sorted.begin(),sorted.end());
        int l=0,r=n-1;
        while(l<r)
        {
            if(sorted[l].first+sorted[r].first==target)
            {
                answer.push_back(sorted[l].second);
                answer.push_back(sorted[r].second);
                return answer;    
            }
            
            if(sorted[l].first+sorted[r].first > target)
            {
                r--;
            }
            else
                l++;
        }
     
        return answer;
    }
};
