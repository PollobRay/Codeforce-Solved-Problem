//
// Created by Ray on 6/11/2022.
//
/*
 *  nCr mod P = ( n! / (r! * (n-r)!) ) mod P
 *            = ( n! * ((n-r)!)^-1 * (r!)^-1 ) mod P
 *            = ( fact(n) %p * inverseModulo(n-r)%p * inverseModulo(r)%p )%p
 *
 */

// Time : O( (long r)^2)
// Space: O(n)
/*
unsigned long long bigMod(unsigned long long a,int b,int p)
{
    if(b==0)
        return 1%p;
    unsigned long long x=bigMod(a,b/2,p);
    x=(x*x)%p;
    if(b%2==1)
        x=(x*a)%p;
    return x;
}
unsigned long long inverseModulo(unsigned long long n,int p)
{
    return bigMod(n,p-2,p);
}
unsigned long long fac[100005]; // n+1
void fact(int n,int p)
{
    fac[0]=1;
    for (int i = 1; i <=n ; ++i)
    {
        for(int i=1;i<=n;i++)
            fac[i]=((long long)i%p * fac[i-1]%p)%p;
    }
}
unsigned long long nCrModPFermat(unsigned long long n,int r,int p)
{
    if(n<r)
        return 0;
    if(r==0)
        return 1;

    fact(n,p);

    return (fac[n]* inverseModulo(fac[r],p)%p * inverseModulo(fac[n-r],p)%p )%p;
}
 */