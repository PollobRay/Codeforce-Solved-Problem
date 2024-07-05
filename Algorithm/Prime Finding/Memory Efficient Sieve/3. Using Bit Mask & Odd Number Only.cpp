//
// Created by Ray on 6/5/2022.
//

/*
#include<cmath>

// O( n log log n )

// We consider that all evens are not prime except 2
int prime[300000]; //to store primes
int nPrime; // to counter of primes
int mark[10002]; //0 if not prime 1 if prime
// size of mark is LIMIT / 32 /2 because each integer is 32 bit long and here we only consider just odd value

void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[0]=mark[0]|(1<<1);  //1 is not prime

    int index,bit;

    // We consider that all evens are not prime except 2
   // for (int i = 4; i <=n ; i=i+2) // all even is not prime
    //{
    //    index=i/32;
      //  bit=i%32;
     //   mark[index]=mark[index]|(1<<bit); // make 1
   // }
    prime[nPrime++]=2;// 2 is prime

    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        int pos=(i+1)/2 ; //because we assume only odds are prime
        index=pos/32;
        bit=pos%32;

        if(!(mark[index]&(1<<bit)))  // 0 is prime
            // if i is prime
        {
            prime[nPrime++]=i;

            if(i<=limit) // i*i may overflow
            {
                //loop only run for odd multiples of i
                for (int j = i*i; j <=n ; j=j+i*2)
                {
                    int pos1=(j+1)/2;
                    int index1=pos1/32;
                    int bit1=pos1%32;
                    mark[index1]=mark[index1]|(1<<bit1); // make 1
                }
            }
        }
    }
}

*/