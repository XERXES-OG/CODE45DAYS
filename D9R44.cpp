class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string res;

        for(int i=0; i<path.size(); i++)
        {
            if(path[i]=='/')
            {
                continue;
            }
            string str;

            while(i<path.size() && path[i]!='/')
            {
               str+=path[i];
               ++i;
            }
            if(str==".")
            {
                continue;

            }
            else if(str=="..")
            {
                if(!st.empty())
                st.pop();
            }
            else
            st.push(str);
        }
        while(!st.empty())
        {
            res="/"+st.top()+res;
            st.pop();
        }
        if(res.size()==0)
        {
            return "/";
        }
        return res;
    }
};