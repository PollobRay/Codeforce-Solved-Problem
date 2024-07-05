//
// Created by Ray on 6/9/2022.
//
/*
int phi(int n)
{
    int ret=n;

    for (int i = 2; i*i <=n ; ++i)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n=n/i;

            ret -=ret/i; // same ret *(1- 1/p)
        }
        if(n>i)
            ret -=ret /n;
    }

    return ret;
}
 */