//
// Created by Ray on 6/5/2022.
//

#include<iostream>
using namespace std;

// O( sqrt(n) )
int isPrime1(int n)
{
    if(n<=1)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;

    for (int i = 3; i*i <=n ; i=i+2)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}

// O( logn )
int spf[10001]; //smallest prime factor of a number n
bool v[10001]; //disible or not check
void generate()
{
    for (int i = 2; i <=10000 ; i=i+2)
    {
        spf[i]=2;
    }
    for (int i = 3; i <=10000 ; i=i+2)
    {
        if(!v[i])
        {
            spf[i]=i;
            for (long long j = i; i*j <10000 ; j=j+2)
            {
                if(!v[i*j])
                {
                    v[i*j]=true;
                    spf[j*i]=i;
                }
            }
        }

    }
}

int isPrime2(int n)
{
   if(spf[2]==0)
       generate();
    if (spf[n]==n)
        return 1;
    return 0;
}
/*
int main()
{

    for (int i = 1; i <=10 ; ++i)
    {
        cout<<i<<"  -  "<<isPrime2(i)<<endl;
    }

    return 0;
}
 */