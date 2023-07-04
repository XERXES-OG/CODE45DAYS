class Solution {
public:
    int maxProfit(vector<int>& ar) {
        int b=ar[0];
        int s=0;
        int n=ar.size();
        for(int i=0; i<n; i++)
        {
            if(ar[i]<b)
            {
                b=ar[i];

            }
            if(s<(ar[i]-b))
            {
                s=ar[i]-b;
            }
        }
        return s;
    }
};