/*
Time complexity : O(N)
Space complexity : O(N) , use of unordered_set<char> which store the ocurred character.
Algo :   Declare a unordered_set<char> st
         initialise l=0 and r=0 and iterate over the string
         if the char is not found in st insert  st[r] do save max(st.size()) and increment r;
         else remove str[l] and increment l;
         finaly return/cout the max(st.size());

NOTE: This method uses sliding window in the form of l and r pointers also the hashset is used to find the repeating occurence of a character in the string.
      This question is generally a hashing question.

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
	            int k= us.size();  // k is equal to r -l + 1;
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
/*
Method-2  the more optimal method , would be to store the character along with its index in an unordered map , the index would help us to directely jump to the next 
 	  valid  position  instead of moving there linearly.
Time complexity : O(N)
Space complexity : O(N)
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> ump;// (char,index)
        int i=0 , j=0;
        int res=0;
        
        while(j<n)
        {
            if(ump.find(s[j]) != ump.end() ) 
            {
                i = max(i,1+ ump[s[j]]); // update i to a valid position only when it lies between  left and  right (region on interest)
            }
       
             ump[s[j]] = j;
             res = max(res, j-i+1);
             j++;
        }
       
        
        return res;
    }
};
