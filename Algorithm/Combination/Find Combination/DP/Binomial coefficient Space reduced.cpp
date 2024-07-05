//
// Created by Ray on 6/11/2022.
//

/*
#include <cstring>

long ncr(int n,int r)
{
    if(r>n-r) // when r is too large
        r=n-r;

    long c[r+1];
    memset(c,0,sizeof(c));

    c[0]=1; //nc0

    for (int i = 1; i <=n ; ++i)
    {
        for (int j = min(i,r); j >0 ; j--)
        {
            c[j]=c[j]+c[j-1]; // nCj =n-1 C j + n-1 C j-1
        }
    }

    return c[r];
}

*/