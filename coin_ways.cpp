#include<iostream>
using namespace std;


int ways(int* coins, int n, int amt)
{
    int** dp = new int*[n+1];
    for(int i=0;i<n+1;i++)
        dp[i] = new int[amt+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=amt;j++)
        {
            if(i==0 && j==0)
                dp[i][j] = 1;
            else if(i==0)
                dp[i][j] = 0;
            else if(j==0)
                dp[i][j] = 1;
            else
            {
                if(j<coins[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=amt;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][amt];
}

int main()
{
    int n;
    cin>>n;
    int coins[] = {1,2,5};


    int amt;
    cin>>amt;

    int result = ways(coins, n , amt);
    cout<<result;
}
