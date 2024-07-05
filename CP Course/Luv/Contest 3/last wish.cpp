//
// Created by Ray on 7/31/2022.
//
// AC
/*
#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;

bool compareV(pair<int,int> d1,pair<int,int> d2)
{
    long long v1,v2;
    v1=d1.first+d1.second;
    v2=d2.first+d2.second;

    if(v1<v2)
        return true;
    else if(v1==v2)
    {
        if(d1.first<d2.first)
            return true;
        else
            return false;
    }
    else
        return false;

}

int main()
{
    int t;
    int n;
    int a,b;
    vector<pair<int,int> >value; //a ,b
    map<pair<int,int>, int> hash;

    cin>>t;

    for (int k = 1; k <=t ; ++k)
    {
        cin>>n;

        vector<int> result(n+1);
        value.clear();
        hash.clear();

        for (int i = 1; i <=n ; ++i)
        {

            cin>>a>>b;
            value.push_back(make_pair(a,b));
            hash.insert({make_pair(a,b),i});
        }

        sort(value.begin(),value.end(), compareV); //sorting

        int loc=0;

        for(pair<int,int> v:value)
        {
            result[hash[v]]=loc;
            loc++;
        }
        for (int i = 1; i <=n ; ++i)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/