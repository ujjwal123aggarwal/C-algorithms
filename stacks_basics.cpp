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
};


int main()
{
    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('h');

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
