class Solution {
public:
    bool isHappy(int n) {
     unordered_set<int> s;
     while(true){
         int sum=0;
         while(n!=0)
         {
             sum+=pow(n%10,2);
             n=n/10;
         }
         if(sum==1)
         {
             return true;
         }
         n=sum;
         if(s.find(n)==s.end())
         {
             s.insert(n);
         }
         else{
             return false;
         }
     }

    }
};