class Solution {
public:
    int minMoves(vector<int>& nums) {
     long long sum=0;
     int m=INT_MAX;
     for(auto k:nums)
     {
         sum+=k;
         m=min(k,m);
     }   
     return sum-(nums.size()*m);
    }
};