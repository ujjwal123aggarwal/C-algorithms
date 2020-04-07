#include<iostream>
#include<vector>
using namespace std;

template <typename t>
class stack{
 vector<t> v;
public:
    void push(t d)
    {
        v.push_back(d);
    }
    void pop()
    {
      v.pop_back();
    }

    t top(){
       return v[v.size()-1];
    }

    bool empty(){
    return v.size()==0;

    }

    int sizes(){
    return v.size();
    }

t findmid(stack<char> s)
{
        return v[v.size()/2];
}
};
void printstack(stack<char> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main()
{
    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('h');
s.push('p');
    printstack(s);
    char mid = s.findmid(s);

    cout<<"mid: "<<mid<<endl;
    return 0;
}
