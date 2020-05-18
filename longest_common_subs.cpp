#include<iostream>
using namespace std;

int LCS(string a, string b, int i, int j, string &out)
{
    if(a[i]=='\0' || b[j]=='\0')
    {
        out = out + '\0';
        return 0;
    }


    if(a[i]==b[j])
    {
        out = out + a[i];
        return 1 + LCS(a,b,i+1,j+1, out);
    }


    else
        return max(LCS(a,b,i,j+1,out) ,LCS(a,b,i+1,j,out));
}

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);

    string out = "";
   int result = LCS(a,b,0,0,out);
   cout<<out<<endl;
   cout<<result;
}
