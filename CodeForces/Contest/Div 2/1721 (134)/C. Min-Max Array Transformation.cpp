//
// Created by Ray on 8/30/2022.
//
// AC
/*
#include<iostream>
#include <vector>
using namespace std;

int b[200002];

int lowerBound(int lo,int hi,int d)
{
     int mid;
     while(hi-lo>1)
     {
         mid=(hi+lo)/2;

         if(b[mid]<d)
             lo=mid+1;
         else
             hi=mid;
     }
     if(b[lo]>=d)
         return lo;
     if(b[hi]>=d)
         return hi;
     return hi;
}

int main()
{
    int t;
    int n;

    cin>>t;


    for (int i = 0; i < t; ++i)
    {
        cin>>n;

        vector<int> a(n);
        vector<int> dmax(n);
        int loindex=0;
        for (int j = 0; j <n ; ++j)
        {
            cin>>a[j];
        }
        for (int j = 0; j <n ; ++j)
        {
            cin>>b[j];
        }
        for (int j = 0; j < n; ++j)
        {
            loindex= lowerBound(loindex,j,a[j]);
            cout<<b[loindex]-a[j]<<" ";
        }
        cout<<endl;
        loindex=n-1;
        for (int j = n-1; j >=0 ; j--)
        {
            dmax[j]=b[loindex]-a[j];
            if(j>0 && a[j]>b[j-1])
                loindex=j-1;
        }
        for (int j = 0; j <n ; ++j)
        {
            cout<<dmax[j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
*/