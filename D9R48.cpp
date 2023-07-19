class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,vector<string>> mp;
        for(int i=0; i<strs.size(); i++)
        {
            string str=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(str);

        }
        for(auto k:mp)
        {
            v.push_back(k.second);
        }
        return v;

    }
};