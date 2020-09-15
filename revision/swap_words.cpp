#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string a,b;
    getline(cin,a);
    getline(cin,b);
    vector<string> v;
    string str="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            v.push_back(str);
            str="";
        }
        else
            str = str + s[i];
    }
    v.push_back(str);
    pair<int,int> index;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==a)
            index.first = i;
        if(v[i]==b)
            index.second = i;
    }
    swap(v[index.first],v[index.second]);
    str = "";
    for(int i=0;i<v.size();i++)
    {
        str = str + v[i] + " ";
    }
    cout<<str<<endl;

}
