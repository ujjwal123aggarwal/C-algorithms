#include<iostream>
#include<stack>
using namespace std;


bool parenthesis(string a)
{
    stack<char> s;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!='}')
            s.push(a[i]);
        else
        {
            if(s.empty())
                return false;
            while(s.top()!='{')
                {
                    if(s.empty())
                    return false;
                    s.pop();
                }
            s.pop();
        }
    }
    while(!s.empty())
    {
        if(s.top()=='{')
            return false;
        s.pop();
    }
    return true;

}

int main()
{
    string s;
    getline(cin,s);

    bool result = parenthesis(s);
    cout<<result;
}
