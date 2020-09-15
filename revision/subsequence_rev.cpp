#include<iostream>
using namespace std;

void subs(char* in, char* out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    out[j] = in[i];
    subs(in,out,i+1,j+1);
    subs(in,out,i+1,j);
}

int main()
{
    char in[] = "abc";
    char out[100];

    subs(in,out,0,0);
}
