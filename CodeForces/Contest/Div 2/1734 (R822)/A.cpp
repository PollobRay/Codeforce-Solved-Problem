//
// Created by Ray on 9/23/2022.
//
//Not AC
/*
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int strick[305];
    int t,n;

    cin>>t;
    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;
        for (int j = 0; j < n; ++j)
        {
            cin>>strick[j];
        }
        int minOp=9999;

        for (int j = 0; j <n ; ++j)
        {
            for (int k = j+1; k <n ; ++k)
            {
                for (int l = k+1; l <n ; ++l)
                {
                    if(abs(strick[j]-strick[k])+abs(strick[k]-strick[l])<minOp)
                        minOp=abs(strick[j]-strick[k])+abs(strick[k]-strick[l]);
                }
            }
        }
        cout<<minOp<<endl;
    }

}
*/