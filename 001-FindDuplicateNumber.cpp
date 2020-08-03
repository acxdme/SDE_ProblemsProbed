/*
Time complexity : O(n)
Space complexity : O(1)
My approach :  Use of hare and tortoise algorithm in the form of slow and fast pointers , the algo is to first find the point where they meet (they will definately meet as per the
question ) now reset slow to initial position and this time move slow and fast at same pace( one iteration at a time).
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        
     int slow=nums[0];
     int fast=nums[0];
      do
      {
          fast=nums[nums[fast]];
          slow=nums[slow];
      } while(slow!=fast);
    
        slow=nums[0];
        while(fast!=slow)
        {
            fast=nums[fast];
            slow=nums[slow];
        }
      return slow;     
    }
};
