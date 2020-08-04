/*
from O(n^3) to O(n^2) we have kadane's Algorithm which does it in O(N) !
Space complexity : O(1)
The intution behind Kadane's Algorithm is that sum upto ith postition is considered or sum of only ith postion's element is considered.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int globalSum=nums[0];
        int localSum=0;
        for(int i=0;i<nums.size();i++)
        {
           localSum+=nums[i];
           globalSum=max(localSum,globalSum);
           localSum= max(0,localSum);
        }
        
        return globalSum;
        
    }
};
