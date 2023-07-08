class Solution {
public:
    int strStr(string h, string n) {
        
        int a=h.length();
        int b=n.length();
        for(int i=0; i<=a-b; i++)
        {
            int j=0;
            for(; j<b; j++)
            {
                if(h[i+j]!=n[j])
                {
                    break;
                }

            }
            if(j==b){
                return i;
            }
        }
        return -1;
    }
};