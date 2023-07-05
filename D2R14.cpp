class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        int x=0;
        for(int i=1; i<n; i++)
        {
            if(v[i]>v[i-1])
            {
                x+=v[i]-v[i-1];
            }
    
        
        }

        return x;
    }

};