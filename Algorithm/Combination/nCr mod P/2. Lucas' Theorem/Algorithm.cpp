//
// Created by Ray on 6/11/2022.
//

// Time: O(p*p * logP(n) )
// Space : O(p)
/*
int nCrModPDp(int n,int r,int p)
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
            c[j]=(c[j]+c[j-1])%p; // nCj =n-1 C j + n-1 C j-1
        }
    }

    return c[r];
}
int nCrModPLucas(int n,int r,int p)
{
    if(r==0)
        return 1;
    int ni=n%p;
    int ri=r%p;

    return (nCrModPLucas(n/p,r/p,p)* //Last digits of n & r
            nCrModPDp(ni,ri,p))%p;   // Remaining digits
}
 */