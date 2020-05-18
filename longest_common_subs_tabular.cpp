#include<iostream>
using namespace std;


int LCS(string a, string s)
{
    //int dp[100][100];

    int m = a.length();
    int n = s.length();

    int** dp = new int*[n+1];
for(int i = 0; i < n+1; i++)
    dp[i] = new int[m+1];

    /*for(int k=0;k<m;k++)
        dp[0][k] = 0;
    for(int k=0;k<n;k++)
        dp[k][0] = 0;*/

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                dp[i][j] = 0;

            else if(s[i-1]==a[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }

            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int key = dp[n][m];
    char* r = new char[key+1];
    r[key] = '\0';

    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(s[i-1]==a[j-1])
        {
            r[key-1] = s[i-1];
            i--;
            j--;
            key--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else
            j--;
    }

    cout<<"result:"<<r<<endl;
    return dp[n][m];
}

int main()
{

    string a,s;
    getline(cin,a);
    getline(cin,s);
   int result = LCS(a,s);
   cout<<result;
}
