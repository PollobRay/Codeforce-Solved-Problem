//
// Created by Ray on 6/5/2022.
//


/*

// O( n log log n )

// Here we assume that all evens are not prime except 2
// so we reduce 'mark' array to half
// and only store for odd values

#include<cmath>

int prime[300000]; //to store primes
int nPrime; // to counter of primes
bool mark[10002]; //true if not prime false if prime
// size of mark is LIMIT / 2

void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[1]=true; //1 is not prime

    //assume all evens are not prime
    //for (int i = 4; i <=n ; i=i+2) // all even is not prime
    //{
      //  mark[i]=true;
    //}
    prime[nPrime++]=2;// 2 is prime

    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        if(!mark[(i+1)/2])  // index 2 is for 3, 3 for 5, 4 for 7 and so on
            // if i is prime
        {
            prime[nPrime++]=i;

            if(i<=limit) // i*i may overflow
            {
                //loop only run for odd multiples of i
                for (int j = i*i; j <=n ; j=j+i*2)
                {
                    mark[(j+1)/2]=true;
                }
            }
        }
    }
}


 */
