class Solution {
public:
    vector<int> twoSum(vector<int>& x, int t) {
       vector<int> v=x; 
       sort(v.begin(),v.end());
       int low=0;
       int high=v.size()-1;
       vector<int> a;
       while(low<high){
           if(v[low]+v[high]==t){
              a.push_back(v[low]);
              a.push_back(v[high]);
              
               break;

           }
           else if(v[low]+v[high]<t)
           {
               low++;
           }
           else if(v[low]+v[high]>t)
           {
               high--;
           }

       }
       v.clear();
       for(int i=0; i<x.size(); i++)
       {
           if(x[i]==a[1] || x[i]==a[0])
           {
              v.push_back(i);
           }
       }
       return v;
    }
};