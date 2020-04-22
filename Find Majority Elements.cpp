#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {

    int n,m;
    cin>>n;
    vector<int> s;
    int great = 0;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        s.push_back(m);
        //s[i] = m;
        if(m>=great)
        great=m;

    }

    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<great;

    vector<int> a(great+1,0);

    for(int i=0;i<n;i++)
    {
        a[s[i]]++;
    }
    cout<<endl;
    for(int i=0;i<=great;i++)
    {
        if(a[i]>n/3)
        cout<<i<<" ";
    }



    //cout<<"Hello World!";
}
