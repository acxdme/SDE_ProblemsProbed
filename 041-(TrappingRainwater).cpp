/*
Approach 1 - Brute Force method.
time complexity : O(N^2)
Space complexity : O(N)
Algo :  For each index calculate the left max height and right max height.
        the answer will be summation of  min(left max height,right max height) minus height[i]
*/


/*
Approach 2 - Dynamic programming method.
Time complexity : O(N)
Space complexity : O(N)
Algo :     Precompute and store the left max heights and right max heights for each index i into array's left and right.
           anwer will be the min(right[i],left[i]) - height[i];
*/
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n= height.size();
        if(n<3)
            return 0;
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            left[i] = max(left[i-1],height[i]);
        }
        for(int j=n-2; j>=0;j--)
        {
            right[j] = max(right[j+1],height[j]);
        }
        int answer=0;
        for(int i=0;i<n;i++)
        {
            answer+= min(left[i],right[i])-height[i];
        }
       return answer; 
    }
};
