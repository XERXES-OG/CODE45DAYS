class Solution {
public:
    int findDuplicate(vector<int>& v) {
       unordered_map<int,int> mp;
       for(int i=0; i<v.size(); i++)
       {
           mp[v[i]]++;
       }
       int ans=0;
       for(auto k:mp)
       {
           if(k.second>1)
           {
               ans=k.first;
           }
       }
       return ans;
    }
};