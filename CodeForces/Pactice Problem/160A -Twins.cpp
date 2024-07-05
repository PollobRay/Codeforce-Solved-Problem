//
// Created by pollo on 4/28/2021.
//
/*
#include <iostream>
using namespace std;

void BubbleSort(int arr[],int len)
{
    int temp;
    for(int i=0;i<=len-1;i++)
    {
        for(int j=len-1;j>=i+1;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
        }
    }
}

int  main()
{
    int n,totalMoney=0,minimumCoin=0,myMoney=0;
    int coin[102];

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
       cin>>coin[i];
       totalMoney=totalMoney+coin[i];
    }
    BubbleSort(coin,n);

    for (int i = n-1; i >=0; i--)
    {
        myMoney=myMoney+coin[i];
        minimumCoin++;
        if (totalMoney-myMoney<myMoney)
            break;

    }

    cout<<minimumCoin<<endl;

    return 0;
}
 */