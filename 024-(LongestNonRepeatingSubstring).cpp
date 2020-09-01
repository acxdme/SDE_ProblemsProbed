/*
Time complexity : O(N)
Space complexity : O(N) , use of unordered_set<char> which store the ocurred character.
Algo :   Declare a unordered_set<char> st
         initialise l=0 and r=0 and iterate over the string
         if the char is not found in st insert  st[r] do save max(st.size()) and increment r;
         else remove str[l] and increment l;
         finaly return/cout the max(st.size());
*/

#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    int n= str.size();
	    unordered_set<char> us;
	    int l=0,r=0;
	    int answer=0;
	    while(r<n)
	    {
	        if(us.find(str[r])==us.end())
	        {
	            us.insert(str[r]);
	            int k= us.size();
	            answer= max(answer,k);
	            r++;   
	        }
	        else
	        {
	            us.erase(str[l]);
	            l++;
	        }
	  }
	  
	    cout<<answer<<endl;
	}
	return 0;
}
