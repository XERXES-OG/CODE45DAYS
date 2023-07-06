class Solution {
public:
    int maxArea(vector<int>& v) {
        int l=0;
        int ans=INT_MIN;   
        int h=v.size()-1;
        int res;
        while(l<h)
        {
            int left=v[l];
            int right=v[h];

            res=(h-l)*(min(left,right));

            ans=max(ans,res);

            if(left<right)
            {
                l++;
            }
            else{
                h--;
            }


        
        }
        return ans;
    }
};