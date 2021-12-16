//
// Created by Ray on 12/3/2021.
//
// find index of maximum value(Hmax) & index of minimum or equal value index(Lmin)
// swap=Hmax+n-Lmin-1
//if(Hmax>Lmin)
// swap=swap-1
/*
#include <iostream>
using namespace std;

int sort(int arr[],int n)
{
    int swap=0;

    //finding maximum
    int max=-1,Hindex;
    for (int i = 0; i < n; ++i)
    {
        if (max<arr[i])
        {
            max=arr[i];
            Hindex=i;
        }
    }

    //finding minimum
    int min=111,Lindex;
    for (int i = 0; i < n; ++i)
    {
        if (min>=arr[i])
        {
            min=arr[i];
            Lindex=i;
        }
    }
    //cout<<Hindex<<" "<<Lindex<<endl;

    swap=Hindex+n-Lindex-1;
    if (Hindex>Lindex)
        swap--;

     return swap;
}

int main()
{
    int arr[110],n;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }

    cout<<sort(arr,n)<<endl;


    return 0;
}
*/
