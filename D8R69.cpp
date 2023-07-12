class Solution {
public:
    string convertToTitle(int n) {
        string res;
        char a;
        while(n)
        {
            n-=1;
            a='A'+n%26;
            res=a+res;
            n=n/26;


        }
        return res;
        
    }
};