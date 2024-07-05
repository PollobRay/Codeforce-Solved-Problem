//
// Created by Ray on 8/19/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int divisor[1000002];
void divisorFinder(int n)
{
    for (int i = 1; i <=n ; ++i)
    {
        for (int j = i+i; j <=n ; j+=i) //j=i+i is for getting highst divisor but not equal that number
        {
            divisor[j]=i;
        }
    }
}

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    int t;
    int x,y;

    divisorFinder(1000000);
    divisor[1]=-1;

    cin>>t;
    for (int i = 1; i <= t; ++i)
    {
        cin>>x>>y;

        int g= gcd(x,y);

        cout<<"Case "<<i<<": "<<divisor[g]<<endl;
    }

    return 0;
}


*/