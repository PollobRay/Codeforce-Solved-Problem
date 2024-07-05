//
// Created by Ray on 8/17/2022.
//
//Not ac
/*
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n;
    cin>>t;

    for (int i = 0; i <t ; ++i)
    {
        cin>>n;

        vector<pair<int,int> >axes(n);
        for (int j = 0; j < n; ++j)
        {
            cin>>axes[j].first>>axes[j].second;
        }

        long long distance,maxDistance=0;

        for (int j = 0; j <n ; ++j)
        {
            for (int k = j+1; k <n ; ++k)
            {
                distance=((axes[j].first-axes[k].first)*(axes[j].first-axes[k].first))+((axes[j].second-axes[k].second)*(axes[j].second-axes[k].second));
                if(abs(distance)>maxDistance)
                    maxDistance=abs(distance);
            }
        }
        cout<<"Case "<<i+1<<": "<<maxDistance<<endl;
    }


    return 0;
}
*/