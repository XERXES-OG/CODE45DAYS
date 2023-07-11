class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans,n,0,0,"");
        return ans;
    }
    void solve(vector<string>& ans, int n, int open, int close, string res)
    {
        if(res.size()==2*n)
        {
            ans.push_back(res);
            return;
        }
        if(open<n)
        {
            solve(ans,n,open+1,close,res+"(");
        }
        if(close<open)
        {
            solve(ans,n,open,close+1,res+")");
        }
    }
};

//this recurssive function is an imlementation of backtracking
//yaad rakhiyo bhai xd