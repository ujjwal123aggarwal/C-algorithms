#include<iostream>
using namespace std;

int stairs(int n,int* dp)
{
    if(n==0)
    {
        dp[n] = 1;
        return 1;
    }

    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];


    //int keep = 0;
    dp[n] = stairs(n-1,dp)+stairs(n-2,dp)+stairs(n-3,dp);
   // dp[n]= keep;
    return dp[n];
}

int bottom(int n)
{
    int* dp = new int[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3;i<=n;i++)
    {

        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}

int main()
{
    int n;
    while(1)
    {
        int dp[1000];
        for(int i=0;i<1000;i++)
            dp[i]=-1;
         cin>>n;
    int ways = stairs(n,dp);
    cout<<ways<<endl;
    int way2 = bottom(n);
    cout<<way2<<endl;
    }

}
