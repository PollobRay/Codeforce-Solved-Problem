//
// Created by Ray on 8/9/2022.
//
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long result=0;
    vector<pair<long,long> > coord(n+1);

    for (int i = 1; i <=n ; ++i)
    {
        cin>>coord[i].first>>coord[i].second;
    }

    for (int i = 1; i <=n-1 ; ++i)
    {
        result+=(coord[i].first*coord[i+1].second)-(coord[i+1].first*coord[i].second);
    }
    result+=(coord[n].first*coord[1].second)-(coord[1].first*coord[n].second);

    if(result<0)
        result*=-1;
    cout<<result<<endl;


    return 0;
}
*/