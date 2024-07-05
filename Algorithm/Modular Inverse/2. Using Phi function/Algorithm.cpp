//
// Created by Ray on 6/10/2022.
//
//using phi function

//Assume B and M is co-prime with each other
/*
int phi(int n)
{
    int ret=n;

    for (int i = 2; i*i <=n ; ++i)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n=n/i;

            ret -=ret/i; // same ret *(1- 1/p)
        }
        if(n>i)
            ret -=ret /n;
    }

    return ret;
}
int bigmod(int a,int b,int M) // a^b mod M
{
    if(b==0)
        return 1%M;
    int x=bigmod(a,b/2,M);
    x=(x*x)%M;
    if(b%2==1)
        x=(x*a)%M;
    return x;
}
int moduloInverse(int B,int M)
{
    return bigmod(B,phi(M)-1,M);
}

*/