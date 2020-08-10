/*Time complexity : O(N)
  Space complexity : O(1)
  My approach : Starting from the right traverse backward and find the first point where the sequence is decreasing , now swap that position with the next greater element from
   end ,this element's position will be between end and greater than the first point found. After swapping sort the array which is after the first point's index position.
   (Also if the sequence from right is completely decreasing return the completely sorted array ,since the array is already arranged in maximum position)
 */
 
 class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int n=nums.size();
        int flag=0;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
             {
                //swap(nums[i],nums[n-1]);
                // sort(nums.begin()+i+1,nums.end());
                for(int k=n-1;k>i;k--)
                {
                    if(nums[k]> nums[i])
                    {
                         swap(nums[k],nums[i]);
                          break;
                        
                    }
                }
                
                sort(nums.begin()+i+1 ,nums.end());
                 flag=1;
                 break;
    
             }
        }
        if(flag==0)
        sort(nums.begin(),nums.end());
        

    }
};
