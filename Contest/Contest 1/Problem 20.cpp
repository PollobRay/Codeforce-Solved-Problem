//
// Created by pollo on 3/30/2021.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

int insertionSort(char arr[],int len)
{
    int num=0,j;
    char key;

    for(int i=1;i<=len-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            num++;
        }
        arr[j+1]=key;
    }

    return num;
}
void insertionSortPair(pair<int,int> arr[],int len)
{
    int j;
    pair<int,int> key;

    for(int i=1;i<=len-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j].second>key.second)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int M,n,m;
    pair<int,int>pair1[102];//index , serial
    string line;
    char data[102][52];
    char cpydata[52];

    cin>>M;
    //cin>>line;

    for (int i = 1; i <=M ; ++i)
    {
        cin>>n>>m;
        for (int j = 0; j <m ; ++j)
        {
            cin>>data[j];
            strcpy(cpydata,data[j]);
            pair1[j]=make_pair(j,insertionSort(cpydata,n));
        }
        insertionSortPair(pair1,m);

        for (int k = 0; k < m; ++k)
        {
            cout<<data[pair1[k].first];
            if(k<m-1)
                cout<<endl;
        }

    }

    return 0;
}
 */