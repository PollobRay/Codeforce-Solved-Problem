//
// Created by Ray on 6/27/2022.
//

#include<iostream>
#include <set>
using namespace std;
/*
int main()
{
    int n,k,t;
    long long total;


    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        multiset<long long> bags;
        long long d;
        cin>>n>>k;
        total=0;
        long long lst=0;
        for (int j = 1; j <=n ; ++j)
        {
            cin>>d;
            bags.insert(d);
        }
        for (int j = 1; j <=k; ++j)
        {
            lst=*(--bags.end()); //store value;
            total+=lst;
            bags.erase(--bags.end());
            bags.insert(lst/2);
        }

        cout<<total<<endl;
    }

    return 0;
}*/