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
