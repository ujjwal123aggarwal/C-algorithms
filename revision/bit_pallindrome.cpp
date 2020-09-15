#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    int temp = n;
    stack<int> s;
    while(temp!=0)
    {
        int q = temp&1;
        s.push(q);
        temp = temp>>1;
    }

    while(n!=0)
    {
        int q = n&1;
        if(q!=s.top())
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        n = n>>1;
        s.pop();
    }
    if(flag==0)
        cout<<"YES"<<endl;
}
