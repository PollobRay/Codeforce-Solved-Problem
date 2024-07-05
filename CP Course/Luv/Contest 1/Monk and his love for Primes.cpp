//
// Created by Ray on 6/12/2022.
//
/*
#include<stdio.h>
#include <math.h>

int main()
{
    long long int result=0;
    char str[2005];
    int isPrime=1;
    int i;
    long long int j;

    scanf("%s",str);

    for (i = 0; str[i]!='\0' ; ++i)
    {
        if(str[i]>='A' && str[i]<='Z')
            result-=((int)str[i]+32);
        else
            result+=((int)str[i]-32);
    }
    if(result<0)
        result*=-1LL;

    if(result&1LL)
    {
        for (j = 3;  j<= sqrt(result+1LL) ; j=j+2)
        {
            if(result%j==0)
            {
                isPrime=0;
                break;
            }
        }
    }
    else
        isPrime=0;

    printf("%d\n",isPrime);

    return 0;
}
 */