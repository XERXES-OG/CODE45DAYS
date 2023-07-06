class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(),v.end());
        set<vector<int>> res;

        vector<vector<int>> ans;
        
        for(int i=0; i<v.size(); i++)
        {
            int t=0-v[i];
            int l=i+1;
            int h=v.size()-1;
            while(l<h)
            {  
                
                if(v[l]+v[h]==t)
                {
                    res.insert({v[i],v[l],v[h]});
                    l++;
                    h--;   

                  
                }
                else if(v[l]+v[h]<t)
                {
                    l++;
                }
                else if(v[l]+v[h]>t)
                {
                    h--;
                }

            }
           
        }
        for(auto k:res)
        {
            ans.push_back(k);
        }
        return ans;
    }
};