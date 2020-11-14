/*
Time complexity : O(N)
Space complexity : O(1)
Algo :  Since the array is already sorted, we can keep two pointers ii and jj, where ii is the slow-runner while jj is the fast-runner.
        As long as nums[ii] = nums[jj], we increment jj to skip the duplicate.
        When we encounter nums[jj] ! =nums[ii], the duplicate run has ended so we must copy its value to nums[ii + 1].
        ii is then incremented and we repeat the same process again until jj reaches the end of array.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int n = nums.size();
        if(n==0 or n==1)
            return 0;
        int i = 0;
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

//Another way of writing 

int remove_duplicate(int A[],int N)
{
   if( N < 2) return N;
   int i =1, j=1;
   
   while(i<N)
   {
       if( A[i] == A[i-1] ) 
       {
           i++;
       }
       else //unique element found
       {
           A[j] = A[i]; // transfer the value at ith index to the unique maintaing index j;
            j++;
            i++;
       }
       
      
   }
   
    return j;
}
