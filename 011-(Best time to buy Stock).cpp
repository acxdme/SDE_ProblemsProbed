/*
Time complexity : O(N)
Space complexity : O(1)
My approach : The answer lies between the valley and hill points in the points graph of the array. Get the minprice and its following max peak to obtain the most profit.
Note the Brute force approach : O(N^2).
*/

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n= prices.size();
        int minprice=INT_MAX;
        int maxprice=0;
        for(int i=0;i<n;i++)
        {
          if(prices[i]<minprice)
              minprice=prices[i];
          else if( prices[i]-minprice > maxprice)
              maxprice=prices[i]-minprice;
            
        }
        return maxprice;
    }
};
