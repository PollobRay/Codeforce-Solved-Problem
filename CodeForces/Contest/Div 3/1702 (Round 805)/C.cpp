//
// Created by Ray on 7/10/2022.
//
// AC
/*
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> source; // value,first occurance index
    map<int,int> destination; //value, last occurance index

    int t,n,k,v,a,b;

    cin>>t;

    for (int i = 1; i <=t; ++i)
    {
        cin>>n>>k;

        for (int j = 1; j <=n ; ++j)
        {
            cin>>v;
            if(source[v]==0)
            {
                source[v]=j;
            }
            destination[v]=j;
        }

        for (int j = 1; j <=k ; ++j)
        {
            cin>>a>>b;

            if((source[a]<=destination[b])&&(source[a]!=0))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        source.clear();
        destination.clear();

    }



    return 0;
}
*/