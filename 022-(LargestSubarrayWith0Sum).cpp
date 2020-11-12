/*
Time complexity : O(N) 
Space complexity : O(N)  , using hashmap aka unordered_map.  NOTE:(unordered map has worst case time complexity O(N) when collision occurs but ordered map has O(logn) )
Algo: Create an unordered map
      Iterate over the given array ,add the {sum,index} to map if it's found 1st time
          else if sum already exist ,obtain the difference between the 1st obtained and now obtained indices, keep the maximum of it.
      return the max value of the difference found.
Intution: If you get the same sum again that means a subarray with sum 0 exists.
*/

int maxLen(int A[], int n)
{
     unordered_map<int,int> m;
     int sum=0;
     int largest=0;
     m[0]= -1;  // for this case 1 2 0 0 0
     for( int i=0;i<n;i++)
     {
         sum+=A[i];
         if( m.find(sum)==m.end() )
         {
                m.insert({sum,i});
         }
         else
         {
            if( i-m[sum] > largest)
                 largest= i-m[sum];
         }
     }
     return largest;
}
