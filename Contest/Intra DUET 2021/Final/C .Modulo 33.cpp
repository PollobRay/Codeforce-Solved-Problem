//
// Created by Ray on 9/5/2021.
//
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double n,result;
    int r;

    while(scanf("%lf",&n)&&n!=-1)
    {
        result=n/33;
        double f=modf(result,&result);
        r=n-(result*33);

        if(r==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
*/

#include <stdio.h>

bool isModulo(char *num)
{
    printf("%s\n",num);
    int sumOfDigit=0;
    for (int i = 0; num[i]!='\0' ; ++i)
    {
        sumOfDigit+=num[i]-'0';
    }

    if(sumOfDigit%33==0)
        return true;

    return false;
}
int main()
{
    char num[1005];

    while(scanf("%s",num))
    {

        if(isModulo(num))
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}