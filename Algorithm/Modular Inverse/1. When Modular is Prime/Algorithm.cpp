//
// Created by Ray on 6/10/2022.
//
// Consider M is prime and B and M is co-prime
/*
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
    return bigmod(B,M-2,M)%M;
}
*/
