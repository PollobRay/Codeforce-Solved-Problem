 //
// Created by Ray on 6/17/2022.
//
// Zero indexed
/*
#include <stdio.h>

int main()
{
    int N,Q,X,L,R;
    int hash[100005]={0};
    int values[100005];
    int max;

    scanf("%d",&N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d",&values[i]);
    }
    scanf("%d",&Q);
    for (int i = 1; i <= Q; ++i)
    {
        scanf("%d %d %d",&X,&L,&R);
        hash[L]+=X;
        hash[R+1]-=X;
    }
    max=-9999999;
    for (int i = 0; i <N ; ++i)
    {
        if(i!=0)
            hash[i]=hash[i-1]+hash[i];
        if(values[i]+hash[i]>max)
            max=values[i]+hash[i];
    }
    printf("%d\n",max);

    return 0;
}
*/