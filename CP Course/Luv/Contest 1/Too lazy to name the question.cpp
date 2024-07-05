//
// Created by Ray on 6/12/2022.
//
/*
#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long int lcmCal(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b,c;
    long long int i;
    long long int mul[1005]={0};
    int ind=0;
    long long int lcm;

    scanf("%d %d %d",&a,&b,&c);
    lcm= lcmCal(a,b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for (i = a;  ind<c; ++i)
    {

        if(i%a==0||i%b==0)
        {
            mul[++ind]=i;
        }

    }

    if(mul[c]%a==0&&mul[c]%b==0)
        lcm= lcmCal(a,b);
    else if(mul[c]%a==0)
        lcm=a;
    else
        lcm=b;


    for(i=mul[c];i>=0;i=i- lcm)
        printf("%lld ",i);

    printf("\n");


    return 0;
}
*/