//
// Created by Ray on 6/10/2022.
//

// 1+a+a^2+ ............ +a^b  mod M

/*
#include<iostream>
using namespace std;
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

int bigSum(int a,int b,int M)
{
    int x;
    int sub;
    if(b%3==1)
    {
        x=1;
        sub=1;
    }
    else if(b%3==2)
    {
        x=(1+(a%M))%M ;
        sub=2;
    }
    else
    {
        x=((1+(a%M))%M+ bigmod(a,2,M))%M;
        sub=3;
    }
    if(b<=3)
        return x%M;

    return ((bigmod(a,b-sub,M)*x)%M+ bigSum(a,b-sub,M)%M)%M;

}

int main()
{

    cout<<bigSum(2,8,17);
    return 0;
}
 */