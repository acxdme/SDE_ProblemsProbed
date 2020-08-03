/*
This problem is famously called the dutch national flag problem
The optimum way to solve this problemis to use 3 pointer approch low,mid and high.
Time complexity : O(N)
Space complexity : O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int n=nums.size();
        int low=0,mid=0, high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==1)
                mid++;
            else if(nums[mid]==0)
                {
                    swap(nums[mid],nums[low]);
                    low++;
                    mid++;   
                 }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
    }
};
