//
// Created by pollo on 3/21/2021.
//

/*
#include<iostream>
using namespace std;

int SelectionSort(int arr[],int len)
{
    int numofSwap=0,mini;
    for(int i=0;i<=len-1;i++)
    {
        mini=i;
        for(int j=i;j<=len-1;j++)
        {
            if(arr[j]<arr[mini])
                mini=j;
        }
        if(i!=mini)
        {
            swap(arr[i],arr[mini]);
            numofSwap++;
        }

    }
    return numofSwap;
}

int main()
{
    int T,N,num;
    int arr[104];

    cin>>T;
    for (int i = 1; i <=T ; ++i)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        num=SelectionSort(arr,N);

        cout<<"Case "<<i<<": "<<num<<endl;

    }
    return 0;
}
*/
