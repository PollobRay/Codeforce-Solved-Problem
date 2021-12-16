//
// Created by Ray on 12/7/2021.
//
//first sort lamp distance, find maximum distance between two lamp and divide by 2,
// now if first lamp is much far from 0, lamp[0]-0
// if last lamp is much far from l, l-lamp[n-1]
// print maximum value among these three condition
/*
#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(long long l[],int n)
{
    for (int i = 1; i < n; ++i)
    {
        long long key= l[i];
        int j=i-1;

        while(l[j]>key&&j>=0)
        {
            l[j+1]=l[j];
            j--;
        }
        l[j+1]=key;

    }
}
int main()
{
    int n;
    long long l;
    long double r0=0;
    long long lamp[1002];
    int upperlimit,lowerlimit;
    
    cin>>n>>l;

    for (int i = 0; i <n ; ++i)
    {
        cin>>lamp[i];
    }

    lowerlimit=0;
    upperlimit=n;
    insertionSort(lamp,upperlimit);

    for (int i = 0; i <n-1 ; ++i)
    {
        if (r0<(long double)(lamp[i+1]-lamp[i])/2.0)
            r0=(long double)(lamp[i+1]-lamp[i])/2.0;
    }
    if (r0<(lamp[0]-0))
    {
        r0=lamp[0];
    }
    if (r0<(l-lamp[n-1]))
    {
        r0=l-lamp[n-1];
    }

    cout<<setprecision(8)<<fixed<<r0<<endl;
    return 0;
}*/
