#include<iostream>
#include<stack>
using namespace std;

bool parenthesis(string s)
{
    stack<char> a;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch = s[i];
        switch(ch){
            case '{':
                a.push('{');
                break;
            case '[':
                a.push('[');
                break;
            case '(':
                a.push('(');
                break;
            case '}':
                if(!a.empty()&&a.top()=='{')
                    a.pop();
                else {
                        return false;
                }
                break;
            case ']':
                if(!a.empty()&&a.top()=='[')
                    a.pop();
                else {
                    return false;
                }
                break;
            case ')':
            if(!a.empty()&&a.top()=='(')
                a.pop();
            else {
                    return false;
                }break;
        }
        //return a.empty();


    }
return a.empty() ;


}


int main()
{
    string s ;
    getline(cin,s);
    bool result = parenthesis(s);
    if(result) cout<<"Yes";
	else cout<<"No";



    return 0;
}

