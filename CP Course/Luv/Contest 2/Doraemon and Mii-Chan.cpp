//
// Created by Ray on 6/17/2022.
//
/*
#include <stdio.h>

int main()
{
    int m,n;
    int lock[100005]={0};
    int key,lck;
    int open=1;

    scanf("%d %d",&m,&n);

    for (int i = 1; i <=m ; ++i)
    {
        scanf("%d %d",&key,&lck);
        lock[lck]=1;
    }
    for (int i = 1; i <=n; ++i)
    {
        scanf("%d",&lck);
        if(lock[lck]==0)
        {
            open=0;
            break;
        }
    }
    if(open==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
*/