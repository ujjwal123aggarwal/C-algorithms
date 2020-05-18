#include<iostream>
using namespace std;

int edit(string a, string s)
{
    int m = a.length();
    int n = s.length();

    int** dp = new int* [n+1];
    for(int i=0;i<n+1;i++)
        dp[i] = new int[m+1];

    int k=0;
    int l = 0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
                dp[i][j] = k++;
            if(j==0)
                dp[i][j] = l++;

            if(i>0 && j>0)
            {
                if(s[i-1]==a[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
            }
        }
    }
    return dp[n][m];
}


int recursion(string a, string s, int i, int j)
{
    if(a[j]=='\0')
    {
        if(s[i]=='\0')
            return 0;
        return s.length();
    }

    if(s[i]=='\0')
    {
        if(a[j]=='\0')
            return 0;
        return a.length();
    }


    if(a[j]==s[i])
        return recursion(a,s,i+1,j+1);
    else
        return min(recursion(a,s,i+1,j),min(recursion(a,s,i,j+1),recursion(a,s,i+1,j+1)))+1;
}


int main()
{

    string a,s;
    getline(cin,a);
    getline(cin,s);

    int result = edit(a,s);
    int res = recursion(a,s,0,0);
    cout<<result;
    cout<<endl;
    cout<<res;
}
