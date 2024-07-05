//
// Created by pollo on 3/30/2021.
//
/*
#include<iostream>
using namespace std;

int arry[101];

void printValue(int max)
{
    int nov=0;
    for(int i=1;i<=max;i++)
    {
        nov=arry[i];
        for(int j =1;j<=nov;j++)
        {
            cout<<i;
            if(i==max&&j==nov)
                cout<<endl;
            else
                cout<<" ";
        }
        arry[i]=0;

    }
}

int main()
{
    int n,max,v;

    for(;;)
    {
        cin>>n;
        if(n==0)
            break;

        max=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v;
            if(v>max)
                max=v;

            arry[v]++;
        }
        printValue(max);
        //  cout<<endl;
    }
}
*/