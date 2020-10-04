#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int l;
char* fact(int n)
{
    int f =1;
    for(int i=1;i<n;i++)
        f = f*i;
    string a = to_string(f);
    l = a.length();
    char p[1001];
    //strcpy(p, a.c_str());
    for(int i=0;i<=l;i++)
    p[i] = a[i];
    return p;

}

int main()
{
    int n;
    char* a = fact(n);
    for(int i=0;i<l;l++)
        cout<<a[i];

}

