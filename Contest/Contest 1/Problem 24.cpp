//
// Created by pollo on 3/22/2021.
//
/*
#include <iostream>
#include <algorithm>

using namespace std;


int findNeedtoRemove(int ar[],int len)
{
    int count=0,value,numofvalue=0;

    for (int i = 0; i <len ; )
    {
        value=ar[i];
        numofvalue=0;
        if(value==0)
        {
            i++;
            continue;
        }
        while (value==ar[i])
        {
            numofvalue++;
            i++;
        }
        if (value>numofvalue)
        {
            count+=numofvalue;

        }
        else if(value<numofvalue)
        {
            count+=(numofvalue-value);
            //cout<<"n: "<<numofvalue<<endl;
        }

    }
    return count;
}

int main()
{
    int n,arr[100002],v,r,k;

    cin>>n;
    for (int i = 0; i <n ; ++i)
    {
        cin>>arr[i];
    }

    v=arr[0];
   if(n==1&&(v==0||v==1))
    {
        cout<<"0"<<endl;
    }
   else if(n==1&&v!=0)
   {
       cout<<"1"<<endl;
   }
   else
   {
       sort(arr,arr+(sizeof(arr)/sizeof (arr[0])));
       cout<<findNeedtoRemove(arr,n)<<endl;
   }


    return 0;
}
 */