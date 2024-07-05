//
// Created by Ray on 6/12/2022.
//
/*
#include <stdio.h>

int main()
{
    int i,j,k;
    int n,t;
    long long int arr[52][52]={0};

    for(i=1;i<=50;i++)
    {
        for(j=1;j<=50;j++)
        {
            if(j==1||j==i)
                arr[i][j]=1;
            else
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    scanf("%d",&t);
    for (k = 1; k <=t ; ++k)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%lld ",arr[i][j]);
            }

            printf("\n");
        }
    }


    return 0;
}*/