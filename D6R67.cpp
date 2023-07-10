class Solution {
public:
    string addBinary(string a, string b) {
        int i=0;
        int c=0;
        int alen=a.length();
        int blen=b.length();
        string ans="";
        while(i<alen || i<blen || c!=0)
        {
            int x=0;
            if(i<alen && a[alen-i-1]=='1')
            x=1;
           // cout<<x;
            
            int y=0;
            if(i<blen && b[blen-i-1]=='1')
            y=1;
            //cout<<y;

            ans=to_string((x+y+c)%2) + ans;
            c=(x+y+c)/2;
            cout<<c;

            i++;
        }

        return ans;
    }
};