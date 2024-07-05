//
// Created by Ray on 8/9/2022.
//
// https://www.codechef.com/problems/MINEAT
//AC
/*
#include <iostream>
using namespace std;

int N;
int H;
int pile[100002];

bool predicate(int k)
{
   int eatingH=0;

    for (int i = 0; i < N; ++i)
    {
        eatingH+=pile[i]/k; // time takes to eat i'th pile completely

        if(pile[i]%k)
            eatingH++;

        if(eatingH>H)
            return false;
    }

    return true;
}
int binarySearch(int lo,int hi)
{
    int mid;

    while(hi-lo>1)
    {
        mid=(lo+hi)/2;
        //cout<<mid<<endl;
        if(predicate(mid))
        {
            hi = mid;
            //cout<<"True"<<endl;
        }
        else
            lo=mid+1;

    }
    if(predicate(lo))
        return lo;
    if(predicate(hi))
        return hi;

    return 0;
}
int main()
{
    int t;

    cin>>t;

    for (int k = 0; k < t; ++k)
    {
        int maxBananas=-1;
        cin>>N>>H;

        for (int i = 0; i < N; ++i)
        {
            cin>>pile[i];
            if(maxBananas<pile[i])
                maxBananas=pile[i];
        }

        cout<<binarySearch(1,maxBananas)<<endl;
    }




    return 0;
}
 */