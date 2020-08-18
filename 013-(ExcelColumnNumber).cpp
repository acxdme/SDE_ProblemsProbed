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
