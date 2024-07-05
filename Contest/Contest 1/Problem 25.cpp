//
// Created by pollo on 3/29/2021.
//
/*
#include<iostream>
#include <cstring>
using namespace std;

int search(string ip,string ips[],int n)
{
    int index=0;

    for (int i = 0; i < n; ++i)
    {

        if (ip.substr(0,ip.size()-1).compare(ips[i])==0)
        {
            index=i;
            //cout<<"match"<<endl;
            break;
        }
    }

    return index;
}

int main()
{
    int i,m,n,index;
    string command1[1001],command2[1001],comment1[1001],comment2[1001];

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>comment1[i]>>comment2[i];
    }

    for(i=0;i<m;i++)
    {
        cin>>command1[i]>>command2[i];
    }

    for (i=0;i<m;i++)
    {
        index=search(command2[i],comment2,n);
        cout<<command1[i]<<" "<<command2[i]<<" #"<<comment1[index]<<endl;
    }
    return 0;
}
*/