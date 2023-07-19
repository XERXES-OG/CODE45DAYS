class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            string temp;
            while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            if(temp.size()!=0)
            {
                ans=temp+" "+ans;
            }
        }
        int n=ans.size();
        ans.erase(ans.begin()+(n-1));
        

        return ans;

    }
};