//
// Created by Ray on 8/5/2022.
//
// AC
/*
 *  make upper level of each pile
 *  then take a q and find in which index its exits (lower bound)
*/

/*
#include<iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &values,int n)
{
    int lo=0;
    int hi=values.size()-1;
    int mid;

    while(hi-lo>1)
    {
        mid=(hi+lo)/2;

        if(values[mid]<n)
            lo=mid+1;
        else
            hi=mid;
    }
    if(values[lo]>=n)
        return lo;
    if(values[hi]>=n)
        return hi;

    return 0;
}

int main()
{
    int n,m;
    int q;

    cin>>n;

    vector<int> values(n+1);
    values[0]=0;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>values[i];
        values[i]=values[i-1]+values[i];
    }

    cin>>m;
    for (int i = 1; i <=m ; ++i)
    {
           cin>>q;

           cout<<lowerBound(values,q)<<endl;
    }


    return 0;
}
*/