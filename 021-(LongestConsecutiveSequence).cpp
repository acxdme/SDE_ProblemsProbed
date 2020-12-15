/*
 Time complexity : O(N)
 space complexity :O(N)
 My approach :  to do it in O(N) time you have to start from that number which has the possibility of making the longest consecutive sequence.
*/

class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_set<int> record(num.begin(),num.end());
        if(num.size()==0)
            return 0;
        int res = 1;
        for(int n : num){
            int prev = n-1,next = n+1;
            while(record.find(prev)!=record.end()) 
                record.erase(prev--);
            while(record.find(next)!=record.end()) 
                record.erase(next++);
            res = max(res,next-prev-1);
        }
        return res;
    }
};

//another method of writing code , more intuitive way it is!
class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        int n = num.size();
        unordered_set<int> hash(num.begin(),num.end());
        int res = 0;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(hash.find(num[i]-1)!= hash.end()) continue;
            else
            {
                count = 0 ;
                while(hash.find(num[i]++)!= hash.end()) // nums[i] ki value agle iteration pe change hogi.
                {
                    count++;
                    
                }
                res = max(res,count);
                    
            }
        }
        
        return  res;
    }
};
