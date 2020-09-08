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
