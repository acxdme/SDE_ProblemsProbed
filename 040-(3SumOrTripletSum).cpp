/*
Time complexity : O(N^2)
Space complexity : O(1)
Approach : use 2 sum method after fixing one number.
*/

//This code if for when we have to tell whether a triplet sum equal to x exist or not.
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int flag=0;
	    for(int i=0;i<n-2;i++)
	    {
	        int low= i+1, high =n-1;
	        int target = x - a[i];
	        
	        while(low<high)
	        {
	            if(a[low]+a[high]== target)
	            {
	                cout<<"1"<<endl;
	                flag=1;
	                break;
	            }
	            if(a[low]+a[high] > target )
	              high--;
	            else if( a[low]+ a[high] < target)
	             low++;
	        }
	        if(flag==1)
	        break;
	    }
	     if(flag == 0)
	    cout<<"0"<<endl;
	}
	return 0;
	
//This code is for checking whether there exist a triplet whose sum is equal to zero
bool findTriplets(int arr[], int n)
{ 
    sort(arr,arr+n);
    int target=0;
    for(int i=0;i<n-2;i++)
    {
        target = -arr[i];
        int low=i+1,high=n-1;
        while(low<high)
        {
            if(arr[low]+arr[high]==target)
              return true;
            if(arr[low]+arr[high] > target)
             high--;
            else low++;
        }
    }
    return false;
}
	
//3sum original question, the task is to find distinct triplets that add upto 0
/*
 Time complexity : O(N^2)
 Space complexity : O(1)
 */
	
class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums)
     {
        vector<vector<int>> ans;
         
        if(nums.size()<=2)
            return ans;
        sort(nums.begin(),nums.end());
         
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1])l++;
                    while(l<r &&nums[r]==nums[r+1])r--;
                }
                else if(sum<0)l++;
                else
                    r--;
            }
        }
        return ans;
    } 
};
