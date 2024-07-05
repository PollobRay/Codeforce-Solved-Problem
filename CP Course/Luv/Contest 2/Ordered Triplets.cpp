//
// Created by Ray on 6/21/2022.
//
/*
 *  let 5
 *      2 4 5 2 2
 *      hash->
 *          1->0
 *          2->3
 *          3->0
 *          4->1
 *          5->1
 *
 *      loop
 *          i=2
 *             * j=2
 *              dif=|i-j|=0
 *              k=j+-dif
 *
 *              k=j+dif
 *              so, i=2, j=2, k=2
 *                  3 * (3-1) * (3-2)=6
 *
 *             *   j=4
 *              dif=|i-j|=2
 *              k=j+-dif
 *
 *              k=j-dif
 *              so, i=2, j=4, k=2
 *                  3 * 1 * (3-1)=6
 *
 *             *   j=5
 *              dif=|i-j|=3
 *              k=j+-dif
 *
 *              k=j-dif
 *              so, i=2, j=5, k=2
 *                  3 * 1 * (3-1)=6
 *
 *
 *               Total =6+6+6=18
 *
 */
#include<iostream>
using namespace std;
/*
int main()
{
    int hash[1005];
    int mod=1000000007;
    int n,d;
    int number=0;
    int i,j,k;

    //makes zero
    for (i = 1; i <=1000 ; ++i)
    {
        hash[i]=0;
    }

    cin>>n;

    for ( i = 1; i <=n ; ++i)
    {
        cin>>d;
        hash[d]++;
    }

    for (i = 1;  i<=1000 ; i++)
    {
        if(hash[i]==0)
            continue;

        for (j = 1;  j<=1000 ; j++)
        {
            if(hash[j]==0||(i==j&&hash[i]<3))
                continue;

            int dif= abs(i-j);
            k=j+dif;

            if(k<=1000&&hash[k]!=0)
            {
                if(dif==0)
                {
                    number=(number+((((hash[i]%mod)*(hash[i]-1))%mod)*(hash[i]-2))%mod)%mod;
                    continue;
                }
                else if(i==k)
                {
                    if(hash[i]>=2)
                        number=(number+((((hash[i]%mod)*hash[j])%mod)*(hash[i]-1))%mod)%mod;
                }
                else if(j==k)
                {
                    if(hash[j]>=2)
                        number=(number+((((hash[i]%mod)*hash[j])%mod)*(hash[j]-1))%mod)%mod;
                }
                else
                {
                    number=(number+((((hash[i]%mod)*hash[j])%mod)*hash[k])%mod)%mod;
                }
            }


            k=j-dif;

            if(j>dif&&k<=1000&&hash[k]!=0) //j>dif check because of k can be 0 or negative
            {
                if(i==k)
                {
                    if(hash[i]>=2)
                        number=(number+((((hash[i]%mod)*hash[j])%mod)*(hash[i]-1))%mod)%mod;
                }
                else if(j==k)
                {
                    if(hash[j]>=2)
                        number=(number+((((hash[i]%mod)*hash[j])%mod)*(hash[j]-1))%mod)%mod;
                }
                else
                {
                    number=(number+((((hash[i]%mod)*hash[j])%mod)*hash[k])%mod)%mod;
                }
            }

        }
    }

    cout<<number<<endl;

    return 0;
}*/