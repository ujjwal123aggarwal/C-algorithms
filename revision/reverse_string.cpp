#include<iostream>
#include<stack>
using namespace std;

string reversee(string a)
{
    stack<string> s;
    string str="";
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            s.push(str);
            str = "";
        }
        else
            str = str + a[i];
    }
    s.push(str);
    string q="";
    while(!s.empty())
    {
        q = q + s.top() + " ";

        s.pop();
    }
    return q;
}


int main()
{
    string s;
    getline(cin,s);

    string a = reversee(s);
    cout<<a<<endl;
}
