class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int n=v.size();
        vector<int> s;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
            s.push_back(sum);
        }
        /*for(auto k:s)
        cout<<k<<endl;*/

        int ans=0;

        unordered_map<int,int> mp;
        for(int i=0; i<s.size(); i++){
            if(s[i]==k)
            ans++;
            if(mp.find(s[i]-k)!=mp.end())
            {
                ans+=mp[s[i]-k];
            }

            if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]]++;
            }
            else{
                mp[s[i]]=1;
            }

            

        }

        return ans;

    }
};