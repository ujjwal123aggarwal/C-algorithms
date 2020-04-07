#include<iostream>
#include<vector>
using namespace std;

//template <typename t>
class stack{
 vector<int> v;
public:
    void push(int d)
    {
        v.push_back(d);
    }
    void pop()
    {
      v.pop_back();
    }

    int top(){
       return v[v.size()-1];
    }

    bool empty(){
    return v.size()==0;

    }

    int sizes(){
    return v.size();
    }

int findmid(stack s, int n)
 {
	 if(n%2!=0)
        return v[v.size()/2];
	else
	return v[(v.size()/2)-1];
}
};
void printstack(stack s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main()
{
    stack s;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		s.push(m);
	}

    int  mid = s.findmid(s,n);

    cout<<mid<<endl;
    return 0;
}
