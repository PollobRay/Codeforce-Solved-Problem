//
// Created by Ray on 12/16/2021.
//
// if the number if the number is prefect square root print Yes otherwise not
/*
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n)
{
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for (int i = 3; i <=sqrt(n) ; i=i+2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{

    long long n,x;
    long long root;

    cin>>n;

    for (int i = 0; i <n ; ++i)
    {
        cin>>x;
        root=(long long)sqrt(x);
        if(root*root==x&& isPrime(root))
        {
             cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
 */