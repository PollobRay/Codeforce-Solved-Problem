//
// Created by Ray on 9/8/2022.
//
// AC
/*
#include<iostream>
using namespace std;

int CF[101][100002];
int bigMod(int a,int b,int M)
{
    int ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*1LL*a)%M;
        a=(a*1LL*a)%M;
        b=b>>1; //b=b/2
    }
    return ans;
}

int main()
{
    int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    // from 0 to 24
    int N;
    int L;
    int t;
    int li,ri,mi;
    int ans,p;

    cin>>N;

    for (int i = 1; i <=N ; ++i)
    {
        cin>> L;

        for (int j = 0; j < 25; ++j)
        {
            if(L==1)
                break;

            while(L%primes[j]==0)
            {
                L=L/primes[j];
                CF[primes[j]][i]+=1;
            }
        }

    }

    for (int i = 0; i <25 ; ++i)
    {
        for (int j = 2; j <=N ; ++j)
        {
            CF[primes[i]][j]=  CF[primes[i]][j]+CF[primes[i]][j-1];
        }
    }

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>li>>ri>>mi;
        ans=1;
        for (int j = 0; j < 25; ++j)
        {
            p=CF[primes[j]][ri]-CF[primes[j]][li-1];
            ans=(ans* 1LL*bigMod(primes[j],p,mi))%mi;
        }
        cout<<ans<<endl;
    }


    return 0;
}
 */