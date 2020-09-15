#include<iostream>
using namespace std;

void longest(string s)
{
    int l = s.length();
    int** dp = new int*[l];
    for(int i=0;i<l;i++)
        dp[i] = new int[l];

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(i>j)
                dp[i][j] = 0;
            else if(i==j)
                dp[i][j] = 1;
            else if(j-i==1)
            {
                if(s[i]==s[j])
                    dp[i][j] = 2;
                else
                    dp[i][j] = 0;
            }
        }
    }

    for(int j=2;j<l;j++)
    {
        for(int i=0,k=j;k<l;i++,k++)
        {
            if(s[i]==s[k] && dp[i+1][k-1]>0)
                dp[i][k] = 2 + dp[i+1][k-1];
            else
                dp[i][k] = 0;
        }
    }

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<dp[i][j]<<" ";

        }cout<<endl;
    }
}

int main()
{
    string s;
    getline(cin,s);
    longest(s);
}
