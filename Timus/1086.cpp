//
// Created by Ray on 4/30/2022.
//
//Acccepted
#include <iostream>
#include <cstring>

using namespace std;
/*
bool prime[1000000];
int primeN[15005];


//sieve of eratosthenes
void SieveOfEratosthenes(int n) {

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int pIndex=1;
    for (int i = 2; i <=n ; ++i)
    {
        if(prime[i])
            primeN[pIndex++]=i;
    }
}

    int main()
{
    int k,n;
    memset(prime, true, sizeof(prime));

    SieveOfEratosthenes(163843);


    cin>>k;

    for (int i = 1; i <=k ; ++i)
    {
        cin>>n;
        if(n<0)
        {
            cout<<-1<<endl;
            continue;
        }
        //while (p<n)
       // {
         //   limit=2*limit;
         //   p=SieveOfEratosthenes(limit);
        //}
        cout<<primeN[n]<<endl;
    }

}
*/