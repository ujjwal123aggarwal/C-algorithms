#include<iostream>
using namespace std;


int max_profit(int n, int* weights, int* profit)
{
    int** dp = new int* [5];
    for(int i=0;i<5;i++)
        dp[i] = new int[n+1];

    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[i][j] = 0;
            else
            {
                if(j<weights[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                 dp[i][j] = max(dp[i-1][j], profit[i-1] + dp[i-1][j-weights[i-1]]);

            }

        }
    }
    return dp[4][n];
}

int main()
{
    int weights[] = {5,3,4,2};
    int profit[] = {60,50,70,30};
    int n;
    cin>>n;

    int result = max_profit(n,weights,profit);
    cout<<result;
}
