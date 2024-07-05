//
// Created by pollo on 4/7/2021.
//

// What Happend if you sum

#include <iostream>
using namespace std;
/*
long long gcd(long long n1,long long n2)
{
    if(n2==0)
        return n1;
    else
        return gcd(n2,n1%n2);
}

long long lcm(long long n1,long long n2)
{
    return (n1*n2)/gcd(n1,n2);
}

int main()
{
    int T,N;
    long long sum,v,lcm1;

    cin>>T;
    for (int i = 1; i <=T ; ++i)
    {
      cin>>N;
      sum=0;
        for (int j = 1; j <=N ; ++j)
        {
            cin>>v;
            if (j==1)
            {
                lcm1=v;
            }
            else
            {
                lcm1=lcm(lcm1,v);
                sum=sum+lcm1%132021913;
                cout<<sum<<" LCM : "<<lcm1<<endl;
            }


        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
*/
