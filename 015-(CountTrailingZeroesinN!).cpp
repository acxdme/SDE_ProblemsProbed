/*
Time complexity : log (n)   [base is 5 here]
Space complexity : O(1)
My approach: To count the Number of trailing zeroes just counting the number of 5's is sufficient, to count the number of 5's divide the given number with 5 then with 25 then with
125 uptill the value is greater than 0 is it becomes 0 then stop . the sum of all Quotient gives our answer.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll int answer=0,i=5;
	    while( (n/i) >0)
	    {
	        answer += n/i;
	        i*=5;
	    }
	    cout<<answer<<endl;
	}
	return 0;
}
