//
// Created by Ray on 9/5/2021.
//

#include <stdio.h>
/*
bool notPrimes[1000003];
int sumPrime[1000003];
int max;
int findPrimes(int m,int n)
{
    int total=0;
    if(max<n)
    {
        for (int i = 2; i * i <= n; ++i) {
            if (notPrimes[i] == false) {
                for (int j = i * i; j <= n; j = j + i) {
                    notPrimes[j] = true;
                }
            }
        }

        if (max == 0)
            total = 0;
        else
            total = sumPrime[max - 1];

        for (int k = max; k <= n; ++k)
        {
            if (k == 0 || k == 1) {
                sumPrime[k] = 0;
            }
            if(notPrimes[k]==false)
            {
                total=total+k;
                sumPrime[k]=total;
            }
            else
                sumPrime[k]=total;

        }

        max=n;
    }

    return sumPrime[n]-sumPrime[m-1];
}

int main()
{
    int T,a,b;

    scanf("%d",&T);

    for (int i = 0; i <T ; ++i)
    {
        scanf("%d %d",&a,&b);

        printf("%d\n", findPrimes(a,b));
    }

    return 0;
}
*/