#include<bits/stdc++.h>
using namespace std;
void permute(vector<int> v, int ind)
{
    if(ind==v.size()-1)
    {
        for(auto k:v)
        {
            cout<<k;
        }
        cout<<endl;
        return;

    }
    for(int i=ind; i<v.size(); i++)
    {
        swap(v[i],v[ind]);
        permute(v,ind+1);
        swap(v[i],v[ind]);
    }

}
int main(){
    vector<int> v={1,2,3};
    permute(v,0);
    return 0;
}