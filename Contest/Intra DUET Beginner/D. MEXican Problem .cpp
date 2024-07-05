//
// Created by Ray on 8/17/2022.
//
// AC
/*
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    int x;
    set<int> values;

    cin>>n>>k;

    vector<int> mesList(k+1,0);

    for (int i = 0; i <n ; ++i)
    {
        cin>>x;

        values.insert(x);
    }

    for (int i :values)
    {
        if(i>k)
            break;
        mesList[i]=1;
    }
    int mesCount=0;
    for (int i :mesList)
    {
        if(i==0)
            mesCount++;
    }

    cout<<mesCount<<endl;

    return 0;
}
 */