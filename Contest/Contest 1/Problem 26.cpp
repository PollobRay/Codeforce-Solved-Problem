//
// Created by pollo on 3/21/2021.
//

/*
#include<iostream>
using namespace std;

void Sort(int arr[],int len)
{
    int key,j;
   for(int i=1;i<=len-1;i++)
   {
       key=arr[i];
       j=i-1;
       while(j>=0&&arr[j]>key)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;

   }
}

int findNumofVisibleBoxes(int ar[],int len)
{

    int i,prev,visited,count,first;
    bool isSet= false;

    prev=ar[0];
    first=0;
    count=0;

    i=1;
    ar[0]=-1;
    visited=1;
    while(i<len)
    {
        if(ar[i]==-1)
        {
            i++;
            continue;
        }
        if( prev<ar[i])
        {
            prev=ar[i];
            ar[i]=-1;
            visited++;
            //cout<<prev<<endl;
        }
        else if (!isSet)
        {
            first=i;
            isSet=true;
            //cout<<"Else "<<i<<endl;
        }

        if (visited==len)
        {
           // cout<<"total visited"<<endl;
            break;
        }

        if(i==len-1&&isSet)
        {
            i=first;
           // cout<<"Shifting to first "<<i<<endl;
            prev=ar[i];
            ar[i]=-1;
            visited++;
            isSet=false;
            count++;
        }
        i++;
    }
    //cout<<visited<<endl;
    return count+1;
}
int main()
{
    int n,arr[5002];

    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    //sort
    Sort(arr,n);

    cout<<findNumofVisibleBoxes(arr,n)<<endl;

    return 0;
}
 */