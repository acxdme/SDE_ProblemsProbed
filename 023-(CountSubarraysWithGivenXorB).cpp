/*
Time complexity : O(N)
Space complexity : O(N) , used for creating XorArray.

Algo:  Create the prefix XOR subarray.
       create a unordered_map<int,int> um, iterate ove the XorArray
       if B^XorArray[i]==0 answer++
       also answer+= um[B^XorArray[i]]  (because a subarray with given Xor B has occured , how many times that occured indicated by um's value)
       populate the unordered map um[XorArray[i]]++;
Practice From : https://www.interviewbit.com/problems/subarray-with-given-xor/
*/
int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    int xorArr[n];
    xorArr[0]=A[0];   // 4 2 2 6 4    // 4 6 4 2 6
    for(int i=1;i<n;i++)
    {
        xorArr[i]=xorArr[i-1]^A[i];
    }
    int answer=0;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++)
    {
    
         answer+=um[xorArr[i]^B];
    
        if( xorArr[i] == B)
          answer++;
        
        um[xorArr[i]]++;
    }
    return answer;
}

