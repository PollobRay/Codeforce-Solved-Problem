//
// Created by Ray on 5/30/2022.
//
/*
#include<iostream>
using namespace std;

int array[100005];

int max(int n)
{
    int m=0;

    for(int i=n;i>=1;i--)
    {
        if(m<array[i])
            m=array[i];
    }
    return m;
}
int main()
{
    int n;

    array[0]=0;
    array[1]=1;

    for(int i=2;i<100000;i++)
    {
        if(i&1)
            array[i]=array[i/2]+array[i/2+1];
        else
            array[i]=array[i/2];
    }
    for(;;)
    {
        cin>>n;
        if(n==0)
            break;
        cout<<max(n)<<endl;
    }
    return 0;
}
 */