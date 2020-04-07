#include<iostream>
using namespace std;
//#include<queue>

class Queue{

    int *a;
    int n;
    int f;
    int e;
    int cs;
public:
    Queue(int s=5){
    n = s;
    cs = 0;
    int* a = new int[n];
    f = 0;
    e = n-1;

    }

    void push(int d)
    {
        if(cs == n)
            {
                cout<<"overflow"<<endl;
                return;
            }
        e = (e+1)%n;
        a[e] = d;
        cs++;
    }

    void pop()
    {
        if(cs==0)
        {
            cout<<"underflow"<<endl;
            return;
        }
        f = (f+1)%n;
        cs--;
    }



    bool empty()
    {
            return cs==0;
    }

    int front(){
    return a[f];
    }


};

int main()
{
    Queue q;
    q.push(12);
    q.push(2);
    q.push(3);
    q.push(44);
    //q.push(55);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}





