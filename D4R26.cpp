class Solution {
public:
    int majorityElement(vector<int>& n) {
        unordered_map<int,int> mp;
        for(int i=0; i<n.size(); i++)
        {
            mp[n[i]]++;
        }
        int ans=0;
        for(auto k:mp)
        {
            if(k.second>(n.size()/2)){
                ans=k.first;
            }
        }
        return ans;
    }
};