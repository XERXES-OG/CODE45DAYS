class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
     unordered_map<int,int> mp;
     for(int i=0; i<n; i++)
     {
         mp[nums[i]]++;
     }   
     nums.clear();
     for(auto k:mp)
     {
         if(k.second>=1)
         {
             nums.push_back(k.first);

         }
     }
     sort(nums.begin(),nums.end());
    n=nums.size();
     return n;
    }
};