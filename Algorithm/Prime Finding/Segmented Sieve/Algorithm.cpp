//
// Created by Ray on 6/6/2022.
//

/**
 * Find primes between 'a' and 'b'
 * where 1<= a, b <=10^14 and 1<=b-a<=10^6
 *
 *  Time Complexity: O ( b log log b )
 *  Space Complexity: O( sqrt(b))
 *
 *   1) Generate all primes numbers from '0'  to floor( sqrt(b) ), prime[]
 *   2) Create an array of size ( b-a+1 ), isPrime[]
 *   3) Mark multiples of prime[] in isPrime[]
 *   
 *   If number is prime then it mark as false, if number not prime mark as true
 *   
 */

#include<iostream>
#include <cmath>
using namespace std;
/*
int primes[1000000]; // sqrt(10^14)
int nPrime; // to Count Primes
bool isPrime[1000000]; // sqrt (b ) +1
bool isPrimeA_B[1000000]; // b-a+1   ------ (2)
long long a_bPrimes[10000];
int a_bPrimesCount;

void sieve(int n)
{
    int limit=sqrt(n*1.0); // +2 is not used for floor( sqrt(n) )

    isPrime[1]=true; // 1 is not prime

    for (int i = 4; i <=limit ; i=i+2) // all even is not prime except 2
    {
        isPrime[i]=true;    
    }
    
    if(n<=1)
        return;
    
    primes[nPrime++]=2;

    for (long i = 3; i <=limit ; i=i+2) //run only for odd
    {
        if(!isPrime[i]) // if i is prime
        {
            primes[nPrime++]=i;
            
            if (i<=limit)
            {
               //loop only run for odd multiple of i
                for (long j = i*i; j <=limit ; j=j+i*2)
                {
                    isPrime[j]=true;
                }
            }
        }
    }
    
}

void segmentedSieve(long a,long b)
{
    sieve(b); // generate all primes upto sqrt(b)   ------- (1)

    // mark multiples of primes[] in isPrime[] ------------ (3)

    for (int i = 0; i < nPrime ; ++i)
    {
        long firstMultiple=(a/primes[i])* primes[i];
        long start;

        if(firstMultiple<a)
            firstMultiple+=primes[i];

        start=primes[i]*primes[i];

        if(firstMultiple>start)
            start=firstMultiple;

       for (long j = start; j <=b ; j=j+primes[i])
        {
            isPrimeA_B[j-a]=true;
        }
    }

    for (long i = 0; i <(b-a)+1 ; ++i)
    {
        if(!isPrimeA_B[i])
            a_bPrimes[a_bPrimesCount++]=(i+a);
    }

    for (int i = 0; i <a_bPrimesCount ; ++i)
    {
        cout<<a_bPrimes[i]<<endl;
    }
}

*/