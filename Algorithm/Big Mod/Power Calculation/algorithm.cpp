//
// Created by Ray on 6/9/2022.
//
/*
int bigmod(int a,int b,int M) // a^b mod M
{
    if(b==0)
        return 1%M;
    int x=bigmod(a,b/2,M);
    x=(x*1LL*x)%M;
    if(b%2==1)
        x=(x*1LL*a)%M;
    return x;
}*/