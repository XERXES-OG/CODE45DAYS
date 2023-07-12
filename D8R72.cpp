class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        cout<<n;
        cout<<v[n-1];
        int ans;
        while(n!=0)
        { 
          if(v[n-1]!=n)
          {
              ans=n;
              break;
          }
          n--;
        }
        return ans;
    }
};