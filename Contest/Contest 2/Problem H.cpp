//
// Created by pollo on 3/24/2021.
//

/*#include <iostream>
using namespace std;

void bobbleSort(int arr[],int size)
{
    int temp;
    for(int i=0;i<=size-1;i++)
    {
        for (int j = size - 1; j >= i + 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

            }
        }
    }
}

int main()
{
    int n,large,temp,first;
    int array[200];

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>array[i];
    }

    first=array[0];
    if (first==1)
        first=array[1];

    bobbleSort(array,n);
    large=array[n-1];

    for (int i = 0; i < n; ++i)
    {
        if(i==0)
            temp=array[i];
        else
        {
            if (temp!=array[i] && large%array[i]==0)
            {
                    array[i]=0;
            }
        }
        temp=array[i];
    }

    for (int i  =n-1; i >=0 ; i--)
    {
        if (array[i]!=0)
        {
            temp=array[i];
            break;
        }
    }

    if (large%first==0)
        cout<<large<<" "<<temp<<endl;
    else
        cout<<temp<<" "<<large<<endl;
    return 0;
}
*/