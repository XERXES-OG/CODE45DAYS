class Solution {
public:
    void setZeroes(vector<vector<int>>& ar) {
        int r=ar.size();
        int c=ar[0].size();
        vector<int> row,col;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(ar[i][j]==0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }

            }



        }

        for(int i:row)
        {
            for(int j=0; j<c; j++)
            {
                ar[i][j]=0;
            }
        }

        for(int i:col)
        {
            for(int j=0; j<r; j++)
            {
                ar[j][i]=0;
            }
        }
        
    }
};