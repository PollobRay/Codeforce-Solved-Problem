//
// Created by Ray on 8/7/2022.
//
// https://www.spoj.com/problems/AGGRCOW/
//AC
/*
#include <iostream>
#include <algorithm>
using namespace std;

int stalls[100002];
int N; //number of stalls
int C; //number of cows

bool predicate(int distance)
{
    int cows=C;
    int prev= stalls[0]; //taking first
    cows--;
    for (int i = 0; i < N&&cows; ++i)
    {
        if(stalls[i]-prev>=distance)
        {
            prev=stalls[i];
            cows--;
        }
    }
    if (cows==0)
        return true;
    else
        return false;
}
int binarySearch(int lo,int hi)
{
    while(hi-lo>1)
    {
        int mid=(lo+hi)/2;
        if(predicate(mid))//result exits
        {
            lo=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    if(predicate(hi))
        return hi;
    if(predicate(lo))
        return lo;
    return 0;
}
int main()
{
    int t;

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>N>>C;

        for (int j = 0; j < N; ++j)
        {
            cin>>stalls[j];
        }

        sort(stalls,stalls+N);

        cout<<binarySearch(stalls[0],stalls[N-1])<<endl;
    }


    return 0;
}
*/