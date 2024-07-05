//
// Created by Ray on 6/12/2022.
//
// convert binary to decimal
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    int n;
    char c[60];
    int v;
    int i,j;
    unsigned long long int result;

    scanf("%d",&t);

    for (i = 1; i <=t ; ++i)
    {
        scanf("%d",&n);
        scanf("%s",c);
        result=0;

        for (j = n-1; j >=0 ; j--)
        {
            v=c[j]-'0';
            if(v==1)
                result =result+(long long)powl(2,(n-j-1));
        }
        printf("%llu\n",result);
    }

    return 0;
}
*/