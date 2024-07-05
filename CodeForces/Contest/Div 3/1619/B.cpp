//
// Created by Ray on 12/20/2021.
//

/*
#include <iostream>
#include <cmath>
using namespace std;

int countSquareAndQube(int n)
{
    long long d;
    int sroot;
    int rCount=0;

    for (int i = 1; i <=n ; ++i)
    {
        d=i*i*i;
        sroot=(int)sqrtl(d);

        if(sroot*sroot==d)
            rCount++;//a number is qube with square
    }

    return rCount;
}

int main()
{
    int t;
    long long n;
    int count;
    int cube;

    cin>>t;

    for (int i = 0; i <t ; ++i)
    {
        cin>>n;

        cube=(int)cbrtl(n); // getting cube
        count= countSquareAndQube(cube);

        cout<<(long long) sqrtl(n)+cube-count<<endl;

    }

    return 0;
}*/
