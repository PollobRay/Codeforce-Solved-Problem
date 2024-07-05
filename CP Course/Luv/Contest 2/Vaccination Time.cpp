//
// Created by Ray on 6/18/2022.
//
/*
#include <iostream>
using namespace std;
int arr;//[1008][1008];
int prefixC[1008][1008];
int main()
{
    int M,N;
    int Q;
    int l1,r1,l2,r2;

    cin>>M>>N;
    //input
    for (int i = 1; i <=M ; ++i)
    {
        for (int j = 1; j <=N ; ++j)
        {
            cin>>arr;//cin>>arr[i][j];
            arr=arr%2;//arr[i][j]=arr[i][j]%2;
            //calculation
            prefixC[i][j]=arr+prefixC[i-1][j]+prefixC[i][j-1]-prefixC[i-1][j-1];
        }
    }


    cin>>Q;

    for (int i = 1; i <=Q ; ++i)
    {
        cin>>l1>>r1>>l2>>r2;
        cout<<prefixC[l2][r2]-prefixC[l1-1][r2]-prefixC[l2][r1-1]+prefixC[l1-1][r1-1]<<endl;
    }

    return 0;
}
 */