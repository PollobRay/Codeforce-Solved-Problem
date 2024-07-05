//
// Created by Ray on 6/7/2022.
//
//
//Not AC
#include <stdio.h>
#include <algorithm>
/*
int main()
{
    int t,n;
    int a[50005],b[50005];
    int diff;
    bool pos=true;

    scanf("%d",&t);

    for (int i = 1; i <=t ; ++i)
    {
        pos=true;
        scanf("%d",&n);

        for (int j = 0; j <n ; ++j)
        {
            scanf("%d",&a[j]);
        }
        for (int j = 0; j <n ; ++j)
        {
            scanf("%d",&b[j]);
        }

        std::sort(a,a+n);
        std::sort(b,b+n);

        diff=a[n-1]-b[n-1]; //biggest difference
        if(diff<0)
        {
            printf("NO\n");
            continue;
        }
        int diff2=a[0]-b[0];
        if(diff2==diff)
            printf("YES\n");
        else if(b[0]==0)
            printf("YES\n");
        else
            printf("NO\n");

    }



    return 0;
}
*/