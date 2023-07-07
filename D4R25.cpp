class Solution {
public:
    void merge(vector<int>& ar, int m, vector<int>& br, int n) {
     vector<int> v;
     for(int i=0; i<m; i++)
     {
         v.push_back(ar[i]);
     }   
     for(int i=0; i<n; i++)
     {
         v.push_back(br[i]);

     }
     sort(v.begin(),v.end());
     for(int i=0; i<m+n; i++)
     {
         ar[i]=v[i];
     }
    }
};