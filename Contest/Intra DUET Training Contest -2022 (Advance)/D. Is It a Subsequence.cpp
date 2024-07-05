//
// Created by Ray on 8/23/2022.
//
// AC
/*
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)
        return true;
    else if(a.first==b.first && a.second<b.second)
    {
            return true;
    }
    return false;
}

int sequenceBinarySearch(vector<pair<int,int> > &A,int data,int minIndex) //log(n) log(10^6)
{
    int mid;
    int hi=A.size()-1;
    int lo=0;
    int index,value;

    while(hi-lo>1)
    {
        mid=(hi+lo)/2;

        value=A[mid].first;
        index=A[mid].second;
        if( (value==data && index>minIndex) || value>data )
        {
            hi=mid;
        }
        else
            lo=mid+1;

    }
    if(A[lo].first==data && A[lo].second>minIndex)
        return A[lo].second;

    if(A[hi].first==data && A[hi].second>minIndex)
        return A[hi].second;

    return -1;
}
bool isSequence(vector<pair<int,int> > &A,vector<int> &B)//log(n)
{
    int index=-1;
    for (int i = 0; i < B.size(); ++i)
    {
        index = sequenceBinarySearch(A,B[i],index);
        if(index==-1)
            return false;
    }
    return true;
}
int main()
{
    int n,Q;
    int m;
    int d;

    cin>>n>>Q;

    vector<pair<int,int> > A(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>d;
        A[i]={d,i};
    }

    sort(A.begin(),A.end(), comp);

    for (int i = 1; i <=Q ; ++i)// 10^5
    {
        cin>>m;

        vector<int> B(m);

        for (int j = 0; j <m ; ++j)//10^2
        {
            cin>>B[j];
        }

        if(isSequence(A,B))//10^2 * log(10^6)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
           cout<<"No"<<endl;
        }

    }



    return 0;
}
*/