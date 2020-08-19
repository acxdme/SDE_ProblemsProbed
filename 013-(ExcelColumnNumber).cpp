class Solution {
public:
    int titleToNumber(string s) 
    {
        int n=s.length();
        int answer=0;
        long long int a[8];
        a[0]=1;
        for(int i=1;i<8;i++)
        {
            a[i]=a[i-1]*26;
        }
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            answer+= (int)(s[i]- 'A' +1) * a[j];
            j++;
        }
       return answer; 
    }
};
//Same method but different format of writing code.
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int answer=0,k=0;
	    for(int i=s.length()-1;i>=0;i--)
	    {
	        int n = (int) (s[i]-'A'+1);
	        //answer+= (pow(26,k) *n);
	        answer= answer*26 + n;
	        k++;
	    }
	    cout<<answer<<endl;
	}
	return 0;
}
