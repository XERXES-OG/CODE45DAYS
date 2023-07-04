class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int a=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=0){
                v[a]=v[i];
                a++;
                }
            
        }
        while(a<n)
        {
            v[a]=0;
            a++;
        }

    }
};