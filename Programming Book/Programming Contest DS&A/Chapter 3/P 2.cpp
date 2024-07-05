//
// Created by Ray on 6/5/2022.
//


// Sieve of Eratosthenes

#include <iostream>
#include<cmath>
using namespace std;

/*

// O( n log log n )
int prime[300000]; //to store primes
int nPrime; // to counter of primes
bool mark[1000002]; //true if not prime false if prime

void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[1]=true; //1 is not prime
    for (int i = 4; i <=n ; i=i+2) // all even is not prime
    {
        mark[i]=true;
    }
    prime[nPrime++]=2;// 2 is prime

    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        if(!mark[i]) // if i is prime
        {
            prime[nPrime++]=i;

            if(i<=limit) // i*i may overflow
            {
                //loop only run for odd multiples of i
                for (int j = i*i; j <=n ; j=j+i*2)
                {
                    mark[j]=true;
                }
            }
        }
    }
}

int main()
{

    sieve(100);

    cout<<nPrime<<endl<<endl;
    for (int i = 0; i <=nPrime-1 ; ++i)
    {
        cout<<prime[i]<<endl;
    }
    return 0;
}
 */