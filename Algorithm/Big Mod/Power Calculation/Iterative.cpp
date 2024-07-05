//
// Created by Ray on 8/25/2022.
//
/*
int bigMod(int a,int b,int M)
{
    int ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*1LL*a)%M;
        a=(a*1LL*a)%M;
        b=b>>1; //b=b/2
    }
    return ans;
}
 */