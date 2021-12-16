//
// Created by Ray on 11/29/2021.
//
// store all level data in an array then sort the array if they are level like data[i]=data[i+1] or data[i]+1=data[i+1] and data[i]=final then can pass otherwise can't pass the level
/*
#include <iostream>
using namespace std;

void bubbleSort(int ar[],int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (ar[j] > ar[j+1])
            {
                int t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }

}
int main()
{
    int n,p,q;
    int a[210]; //lever that passed
    bool isPass=false;// indication of pass level
    int pre=0;

    cin>>n;
    cin>>p;

    for (int i = 0; i < p; ++i)
    {
        cin>>a[i];
    }

    cin>>q;
    for (int i = p; i < p+q; ++i)
    {
        cin>>a[i];

    }
    bubbleSort(a,p+q);

    for (int i = 0; i <p+q ; ++i)
    {
        if (pre+1==a[i])
            pre=a[i];
        else if (pre+1<a[i])
        {
            isPass=false;
            break;
        }

        if (n==a[i])
            isPass=true;
    }

    if (isPass)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";

    return 0;
}*/