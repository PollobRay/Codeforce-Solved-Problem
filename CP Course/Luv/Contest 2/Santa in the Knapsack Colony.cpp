//
// Created by Ray on 6/16/2022.
//
/*
#include <stdio.h>

int hsh[10000008];
int arr[100005];
int main()
{
    int n,k;
    int totalNH=0;
    int d;

    scanf("%d %d",&n,&k);

    for (int i = 1; i <=n ; ++i)
    {
        scanf("%d",&arr[i]);
        hsh[arr[i]]++;
    }

    for (int i = 1; i <=n ; ++i)
    {
        if(hsh[arr[i]]>k)
        {
            totalNH++;
            hsh[arr[i]]=0;
        }
    }

    printf("%d\n",totalNH);


    return 0;
}
*/