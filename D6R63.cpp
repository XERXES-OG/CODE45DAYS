class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
     reverse(arr.begin(),arr.end());
     for(int i=0; i<arr.size(); i++)
     {
         for(int j=i+1; j<arr[0].size(); j++)
         {
            swap(arr[i][j],arr[j][i]);
         }
     }   
    }
};