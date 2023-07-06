class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n=v.size();
        int ans=INT_MIN;
        int s=0;
        for(int i=0; i<k; i++)
        {
            s=s+v[i];
        }
        int sum=s;
        ans=max(ans,s);
        for(int i=k-1; i>=0; i--)
        {
            //int sum=0;
            sum=sum-(v[i])+(v[n-k+i]);
            s=max(s,sum);

            
        }
        return s;

    }
};