#include<iostream>
#include<stack>
using namespace std;

/*string backspace(string a,int i)
{
    int l = a.length();
    while(i<l)
    {
        a[i] = a[i+1];
        i++;
    }
    return a;
}*/

stack<char> insertt(string s)
{
    stack<char> si;
    int i=0;
     while(s[i]!='\0')
    {
        if(s[i]=='#')
            si.pop();
        else
        si.push(s[i]);
        i++;
    }
    return si;
}

bool compare(string a, string s)
{
    stack<char> si;
    stack<char> ai;
    int flag = 0;
    si = insertt(s);
    ai = insertt(a);

    if(si.size()!=ai.size())
        return false;

    while(!si.empty())
    {
        if(si.top()!=ai.top())
        {
            flag = 1;
            break;
        }
        si.pop();
        ai.pop();
    }
    if(flag!=1)
        return true;
    else
        return false;


}


int main()
{
    string s,a;
    getline(cin,s);
    getline(cin,a);
    bool result = compare(a,s);
    //compare(a,s);
    cout<<boolalpha;
    cout<<result;
}
