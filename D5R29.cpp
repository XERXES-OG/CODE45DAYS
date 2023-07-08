class Solution {
public:
    bool check(int x, int y, vector<vector<int>> v)
    {
        return (x>=0 && x<v.size() && y>=0 && y<v[0].size());
        
    }

    void gameOfLife(vector<vector<int>>& v) {
             vector<int> dx={0,0,1,1,1,-1,-1,-1};
        vector<int> dy={1,-1,1,-1,0,0,1,-1};

        for(int n=0; n<v.size(); n++)
        {
            for(int m=0; m<v[0].size(); m++)
            {
                int c=0;
                for(int i=0; i<8; i++)
                {
                    int x=n+dx[i];
                    int y=m+dy[i];
                    if(check(x,y,v) && (abs(v[x][y])==1))
                    {
                        c++;
                    }


                }
                if(v[n][m]==1 && ((c<2)||(c>3)))
                {
                    v[n][m]=-1;
                }
                if(v[n][m]==0 &&((c==3)))
                {
                    v[n][m]=2;
                }
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[0].size(); j++)
            {
                if(v[i][j]>=1)
                {
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        }
    }
};