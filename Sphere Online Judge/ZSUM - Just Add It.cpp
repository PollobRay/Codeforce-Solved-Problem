//
// Created by Ray on 9/7/2022.
//
// AC
/*
#include<iostream>
using namespace std;
long long bigMod(long long a,long long b,int mod)
{
    long long ans=1;

    a=a%mod;

    while(b>0)
    {
        if(b&1)
            ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}
int main()
{
    long long n,k;
    int mod=10000007;

    while(1)
    {
        cin>>n>>k;

        if(n==0||k==0)
            break;

        cout<<( ( ( (2* bigMod(n-1,k,mod))%mod + (2* bigMod(n-1,n-1,mod)%mod) )%mod + bigMod(n,n,mod) )%mod +  bigMod(n,k,mod) )%mod<<endl;
    }



    return 0;
}
*/