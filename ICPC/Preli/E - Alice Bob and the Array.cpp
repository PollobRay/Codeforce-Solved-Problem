//
// Created by pollo on 4/7/2021.
//

#include <iostream>
using namespace std;
/*
int SelectionSort(int arr[],int len,long long &ss)
{
    int numofSwap=0,mini,n=len;
    long long sum1=0,sum=0;
    for(int i=0;i<=len-1;i++)
    {
        mini=i;
        for(int j=i;j<=len-1;j++)
        {
            if(arr[j]<arr[mini])
                mini=j;

            //
            if ((j+1!=n&&arr[j]+1==arr[j+1])||(j+1!=n&&arr[j]==arr[j+1])||(j!=0&&arr[j-1]==arr[j])||(j!=0&&arr[j-1]+1==arr[j])||(sum==0&&j+1==n))
            {
                sum=sum+arr[j];
            }
            else
            {
                if(sum1<sum)
                    sum1=sum;
                sum=0;

            }


            //
        }
        if(i!=mini)
        {
            swap(arr[i],arr[mini]);
            numofSwap++;
        }

        //
        if(sum1<sum)
            sum1=sum;
        sum=0;
    }

    ss=sum1;
    return numofSwap;
}

int main()
{
    int t,n,swap,arr[30005];
    long long sss;

    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        scanf("%d",&n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d",&arr[i]);
        }

        swap=SelectionSort(arr,n,sss);

        printf("Case %d: %lld %d\n",c,sss,swap);
    }




    return 0;
}
 */