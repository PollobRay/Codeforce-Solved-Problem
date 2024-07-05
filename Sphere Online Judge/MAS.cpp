//
// Created by Ray on 9/6/2022.
//
// Ac
/*
#include <iostream>
#include <vector>
using namespace std;

long long bigMultiply(long long a,long long b,long long mod)
{
    long long ans=0;

    while(b>0)
    {
        if(b&1)
            ans= (ans+a)%mod;
        a=(a+a)%mod;
        b>>=1;
    }
    return ans;
}

int main()
{
    const long long mod=2760727302517;
    long long square=0;
    long long sum=0;

    int T;
    int n,q;
    int type,x,v;
    long long old;

    cin>>T;

    for (int i = 1; i <=T ; ++i)
    {
        cin>> n>>q;

        vector<long long> A(n+1);
        square=0;
        sum=0;
        for (int j = 1; j <=n ; ++j)
        {
            cin>>A[j];

            square=(square + A[j]*A[j] )%mod;
            sum=(sum+A[j])%mod;
        }

        cout<<"Case "<<i<<":"<<endl;

        for (int j = 1; j <=q ; ++j)
        {
            cin>>type;
            if(type==3)
            {
                cout<<(  bigMultiply(square,n,mod) - bigMultiply(sum,sum,mod) + mod )%mod<<endl;
            }
            else
            {
                cin>>x>>v;

                old=A[x];
                if(type==1)
                    A[x]=v;
                else
                    A[x]=(A[x]+v)%mod;

                square=( ( (square- bigMultiply(old,old,mod) + mod)%mod ) +  bigMultiply(A[x],A[x],mod) )%mod;
                sum=(( (sum-old+mod)%mod ) + A[x] )%mod;

            }
        }
    }



    return 0;
}
 */