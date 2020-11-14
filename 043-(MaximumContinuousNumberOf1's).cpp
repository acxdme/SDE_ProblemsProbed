/*
Time complexity : O(N)
Space complexity : O(1)
Algo : Iterate over the array and increase the count if element is 1
        store count in each iteration as  answer where answer= (answer, count)
        if element is 0 reset count to 0.

*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n= nums.size();
        if(n==0)  return 0;
        int  count=0 , answer=0;
        for(int i=0 ;i<n;i++)
        {
            if(nums[i]==1)
                count++;
            else
                count=0;
            answer= max(answer, count);   // 11110
         }
        
        return answer;
    }
};
