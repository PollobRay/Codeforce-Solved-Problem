//
// Created by Ray on 8/23/2022.
//
// AC
/*
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int lowerBound(vector<int> &indices,int index)
{
    int lo=0;
    int hi=indices.size()-1;
    int mid;

    while(hi-lo>1)
    {
        mid=(lo+hi)/2;

        if(indices[mid]<index)
            lo=mid+1;
        else
            hi=mid;
    }
    if(indices[lo]>=index)
        return indices[lo];
    if(indices[hi]>=index)
        return indices[hi];

    return -1;
}
bool isSequence(map<int,vector<int> > &values,vector<int> &B)
{
    int index=-1;

    for (int i = 0; i < B.size(); ++i)
    {
          if(values[B[i]].empty())
              return false;

          index=lowerBound(values[B[i]],index+1); //
          if(index==-1)
              return false;
    }

    return true;
}
int main()
{
    map<int,vector<int> > values; // value, index of that values
    int n,Q;
    int m;
    int data;

    cin>>n>>Q;

    for (int i = 0; i <n ; ++i)
    {
        cin>>data;
        values[data].push_back(i);//push index of data, always indices in increasing order
    }

    for (int i = 1; i <=Q ; ++i)
    {
        cin>>m;

        vector<int> B(m);
        for (int j = 0; j < m; ++j)
        {
            cin>>B[j];
        }
        if(isSequence(values,B))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

    return 0;
}
*/