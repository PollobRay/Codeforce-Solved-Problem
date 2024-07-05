//
// Created by Ray on 8/4/2022.
//
// AC
/*
 *  A number is called t-prime is it is perfect squared number & its square value is prime
 *  then the number have 3 divisor=1, squared value, that number
 *  hence it is t-prime
 */

/*
#include<iostream>
#include <cmath>
using namespace std;

bool mark[1000002]; //true if not prime false if prime

void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[0]=mark[1]=true; //0 1 is not prime
    for (int i = 4; i <=n ; i=i+2) // all even is not prime
    {
        mark[i]=true;
    }
    if(n<=1)
        return;

    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        if(!mark[i]) // if i is prime
        {
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

bool binarySearch(int v)
{
    return !mark[v];

}

int main()
{

    int N;

    cin>>N;

    long long v;
    long long sq;

    sieve(1000001);//upto 10^6

    for (int i = 0; i < N; ++i)
    {
        cin>>v;
        sq= sqrt(v);
        if(binarySearch(sq)&&sq*sq==v)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

*/