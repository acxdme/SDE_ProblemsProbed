/*
Time complexity :
Space complexity :
Algo :

*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n= nums.size();
        if(n==0)
            return 0;
        int  count=0;
        int answer=0;
        for(int i=0 ;i<n;i++)
        {
            if(nums[i]==1)
                count++;
            else
                count=0;
            answer= max(answer, count);  // 11110
         }
        
        return answer;
    }
};
