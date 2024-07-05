//
// Created by pollo on 3/19/2021.
//

#include<iostream>
using namespace std;
/*
 int main()
 {
    int H,K,value,index,T;
    long limit= 1e5;
    int array[limit+2];

    cin>>T;
    for(int j=1;j<=T;j++)
    {
        // start case
        cin>>H>>K;
        K--;
        for(int i=0;i<H;i++)
        {
            cin>>array[i];
        }

        for(int i=1;i<=H-1;i++)
        {
            value=array[i];
            index=i;
            while(index>0&&array[index-1]>value)
            {
                if(K==index)
                {
                    K--;
                }
                array[index]=array[index-1];
                index--;
            }
            array[index]=value;
        }

        cout<<K+1<<endl;

    }

     return 0;
 }
*/