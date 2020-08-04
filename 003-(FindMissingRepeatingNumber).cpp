/*
Wow, there are various methods to solve this problem some uses extra space or more time but suprisingly there are three optimized solutions to this question ,
namely ( Element index marking, Bit manipulatin using Xor and Forming Equations to obtain results)
*/

//This is the Element index marking method
//Time complexity : O(n)
//Space complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
 {
 
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	   for(int i=0;i<n;i++)
	     cin>>arr[i];
	   for(int i=0;i<n;i++)
	    {
	        if( arr[abs(arr[i])-1] >0)
	          arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
	       else
	          cout<< abs(arr[i])<<" ";
	    }
	    for(int i=0;i<n;i++)
	      {
	          if(arr[i]>0)
	            {
	                cout<<i+1<<endl;
	                break;
	            }
	      } 
	}
	return 0;
}
