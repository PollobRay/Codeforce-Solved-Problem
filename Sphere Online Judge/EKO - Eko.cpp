//
// Created by Ray on 8/5/2022.
//
// https://www.spoj.com/problems/EKO/
//AC
/*
#include<iostream>
using namespace std;

int tree[1000002];
long long M;
int N;

bool predicateFun(int h)
{
    long long sum=0;

    for (int i = 0; i <N ; ++i)
    {
        if(tree[i]>h)
            sum+=(tree[i]-h);
    }
    if(sum>=M)
        return true;
    else
        return false;
}

int binarySearch(int lo,int hi)
{

    while(hi-lo>1)
    {
        int mid=(lo+hi)/2;

        if(predicateFun(mid))
        {
            lo = mid;
        }
        else
        {
            hi=mid-1;
        }
    }

    if(predicateFun(hi))
        return hi;

    if(predicateFun(lo))
        return lo;

    return 0;
}

int main()
{
    int hi=0;

    cin>>N>>M;

    for (int i = 0; i < N; ++i)
    {
        cin>>tree[i];
        if(hi<tree[i])
            hi=tree[i];
    }
    cout<<binarySearch(0,hi);

    return 0;
}*/