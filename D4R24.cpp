class Solution {
public:
    bool canJump(vector<int>& v) {
        int ind=v.size()-1;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(v[i]+i>=ind)
            {
                ind = i;
            }

           
        }
        if(ind==0)
        {
            return true;
        }
        else{
            return false;
        }

    }
};