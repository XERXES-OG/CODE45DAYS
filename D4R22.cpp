class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& ar) {
        int n=ar.size();
        int m=ar[0].size();
        int left=0;
        int right=m-1;
        int top=0; 
        int bottom=n-1;
        int d=1;
        vector<int> ans;
        while(left<=right && top<=bottom){
            if(d==1)
            {
                for(int i=left; i<=right; i++)
                {
                    ans.push_back(ar[top][i]);
                     }
                d=2;
                top++;
            }
            else if(d==2)
            {
                for(int i=top; i<=bottom; i++)
                {
                    ans.push_back(ar[i][right]);
                    
                }
                d=3;
                right--;


            }
            else if(d==3)
            {
                for(int i=right; i>=left; i--)
                {
                    ans.push_back(ar[bottom][i]);
                    
                }
                d=4;
                bottom--;
            }
            else if(d==4)
            {
                for(int i=bottom; i>=top; i--)
                {
                    ans.push_back(ar[i][left]);
                    
                }
                d=1;
                left++;

            }
        }
        return ans;
    }
};