//
// Created by Ray on 8/16/2022.
//
// AC
/*
#include <iostream>
#include <cmath>
using namespace std;

bool mark[1000002]; //true if not prime false if prime

void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[0]=mark[1]=true; //0 & 1 is not prime
    for (int i = 4; i <=n ; i=i+2) // all even is not prime
    {
        mark[i]=true;
    }
    if(n<=1)
        return;
    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        if(!mark[i]) // if i is prime
        {
            if(i<=limit) // i*i may overflow
            {
                //loop only run for odd multiples of i
                for (int j = i*i; j <=n ; j=j+i*2)
                {
                    mark[j]=true;
                }
            }
        }
    }
}
long long dp[1000002];

long long f(int x)
{
    if(dp[x]!=0)
    {
        return dp[x];
    }
    if(!mark[x])//if prime
    {
        dp[x]=x+1;
        return dp[x];
    }
    else // if not prime
    {
        long long result=1+x;
        for (int i = 2; i*i<=x ; ++i)
        {
            if(x%i==0)
            {
                result += f(i);
                if(i*i!=x)
                    result+=f(x/i);
            }
        }
        dp[x]=result;
        return dp[x];
    }
}

int main()
{
    int x;

    sieve(1000000);
    dp[1]=1;

    cin>>x;

    cout<<f(x)<<endl;

    return 0;
}
*/