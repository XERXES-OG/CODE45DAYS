class Solution {
public:
    int subarraysDivByK(vector<int>& v, int k) {
        int s=0;
        unordered_map<int,int> mp;
        mp[0]++;
        int ans=0;

        for(int i=0; i<v.size(); i++)
        {
            int rem=0;
            s=s+v[i];
            rem=s%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mp[rem]>0){
                ans+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]++;
            }
            
        }
        return ans;
      
    }
};