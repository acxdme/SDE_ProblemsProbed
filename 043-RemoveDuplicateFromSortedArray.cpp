/*
Time complexity : O(N)
Space complexity : O(1)
Algo :  Since the array is already sorted, we can keep two pointers ii and jj, where ii is the slow-runner while jj is the fast-runner.
        As long as nums[i] = nums[j]nums[i]=nums[j], we increment jj to skip the duplicate.
        When we encounter nums[j] \neq nums[i]nums[j]  = nums[i], the duplicate run has ended so we must copy its value to nums[i + 1]nums[i+1].
        i is then incremented and we repeat the same process again until jj reaches the end of array.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int n = nums.size();
        if(n==0)
            return 0;
        int i= 0;
       for(int j=0;j<n;j++)
       {
           if(nums[i] != nums[j])
           {
                i++;
               nums[i]= nums[j];
              
           }
       }
        
        return i+1;
    }
};
