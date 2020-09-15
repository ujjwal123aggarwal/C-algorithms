#include<bits/stdc++.h>
#include<iterator>
#include<map>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string str = "";
    map<string,int> m;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            m[str]++;
            str="";
        }
        else
            str = str + s[i];
    }
    m[str]++;
   // map<string,int> :: iterator itr
    for (auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
}
