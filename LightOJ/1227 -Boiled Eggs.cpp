//
// Created by Ray on 6/1/2022.
//

#include <iostream>
#include <algorithm>
using namespace std;
/*
int main()
{
    int t;
    int n,p,q;
    int egg[35];
    int noEgg;
    int weight;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n>>p>>q;


        for (int j = 0; j < n; ++j)
        {
            cin>>egg[j];
        }
        sort(egg,egg+n);

        noEgg=0;
        weight=0;

        for (int j = 1; j <=p && j<=n ; ++j)
        {
            weight=weight+egg[j-1];
            if(weight>q)
                break;
            noEgg++;
        }
        cout<<"Case "<<i<<": "<<noEgg<<endl;
    }

    return 0;
}
*/