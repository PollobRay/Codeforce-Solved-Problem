//
// Created by Ray on 12/5/2021.
//
// take input then sort the array and make difference with n set and store an array then sort array and print first element (minimum)
/*
#include <iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    for (int i = 1; i <n ; ++i)
    {
        int j=i-1;
        int key=arr[i];

        while(arr[j]>key&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}

int main()
{
    int n,m;
    int fm[55];
    int dif1[55];

    cin>>n>>m;

    for (int i = 0; i < m; ++i)
    {
        cin>>fm[i];
    }

    insertionSort(fm,m);



    for (int i = 0; i < m-n+1; ++i)
    {
       dif1[i]=fm[i+n-1]-fm[i];
    }

    insertionSort(dif1,m-n+1);

    cout<<dif1[0]<<endl;

    return 0;
}*/
