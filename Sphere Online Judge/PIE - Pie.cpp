//
// Created by Ray on 8/8/2022.
//
//https://www.spoj.com/problems/PIE/
//AC
/*
#include<iostream>
#include <algorithm>
#include <cmath>
#include<iomanip>
using namespace std;

double volume[10002];
int N;
int F;

bool predicate(double x)
{
    int friends=0;
    for (int i = 0; i < N; ++i)
    {
            if((volume[i]/2.0)>=x)
                friends=friends+floor(volume[i]/x);
            else if(volume[i]>=x)
                friends++;
            if(friends>=F)
                return true;
    }
    return false;
}
double binarySearch(double lo,double hi)
{
    double mid;

    while(hi-lo>1e-5)
    {
        mid=(lo+hi)/2.0;
        if(predicate(mid))
            lo=mid;
        else
            hi=mid;
        //cout<<mid<<endl;
    }
    if(predicate(hi))
        return hi* acos(-1);
    if(predicate(lo))
        return lo* acos(-1);
    return 0;
}

int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; ++k)
    {
        cin>>N>>F;
        F++;
        for (int i = 0; i < N; ++i)
        {
            cin>>volume[i];
            volume[i]= volume[i]*volume[i];
        }

        sort(volume,volume+N);

        cout<<setprecision(4)<<fixed<<binarySearch(0,volume[N-1])<<endl;
    }



    return 0;
}
*/