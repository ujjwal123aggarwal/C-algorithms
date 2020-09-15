#include<bits/stdc++.h>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int n,m,a[100][100];
    vector<int> v;
    map<int,int> mp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        v.push_back(a[i][1]);
        int data = a[i][1];
        mp.insert(make_pair(data,i));
    }
    sort(v.begin(),v.end());
    int b[10][10] = {0};
    for(int i=0;i<v.size();i++)
    {

        int data = v[i];
        int in1 = mp[data];
        for(int k=0;k<m;k++)
            b[i][k] = a[in1][k];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }

}
