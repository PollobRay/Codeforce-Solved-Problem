//
// Created by pollo on 3/27/2021.
//
/*
#include <stdio.h>
int main()
{
    int n,s1,s2,s3,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&s1,&s2,&s3);
        if(s2>s1&&s2>s3)
        {
            s1=s1+s2;
            s2=s1-s2;
            s1=s1-s2;
        }
        else if (s3>s1&&s3>s2)
        {
            s1=s1+s3;
            s3=s1-s3;
            s1=s1-s3;
        }
        if((s2*s2)+(s3*s3)==(s1*s1))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }

    return 0;
}*/