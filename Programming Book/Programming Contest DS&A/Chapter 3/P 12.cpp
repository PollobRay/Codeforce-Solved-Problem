//
// Created by Ray on 6/10/2022.
//

// 1+2a+3a^2+4a^3+.............+ba^(b-1) mod M

#include <iostream>
using namespace std;
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
int sum(int a,int b,int M)
{
    if(b==1)
        return 1;
    return (((b%M)* bigmod(a,b-1,M))%M+sum(a,b-1,M)%M)%M;
}
int main()
{

    cout<<sum(2,5,13);

    return 0;
}
*/