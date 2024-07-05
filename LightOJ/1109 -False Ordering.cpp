//
// Created by Ray on 5/31/2022.
//

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
/*
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second<b.second)
        return true;
    else if(a.second==b.second && a.first>b.first)
        return true;
    else
        return false;
}

int main()
{
    vector< pair <int,int> >value;

    value.push_back(make_pair(0,0));

    for (int i = 1; i <=1000 ; ++i)
    {
        for(int j=i;j<=1000;j=j+i)
        {
            if(j>=value.size())
            {
                value.push_back(make_pair(j,0));
            }
            value[j].second++;
        }
    }
    sort(value.begin()+1, value.end(), sortbysec);

    int t,n;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<value[n].first<<endl;
    }


    return 0;
}*/