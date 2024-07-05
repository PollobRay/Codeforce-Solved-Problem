//
// Created by Ray on 12/16/2021.
//

/*
#include <iostream>
using namespace std;

int  main()
{
    int n,m;
    int prev,present;
    long long cost=0;
    prev=1;

    cin>>n>>m;

    for (int i = 0; i < m; ++i)
    {
        cin>>present;
        if(present<prev)
            cost+=n-prev+present;// n-prev+1+present-1
        // move from prev to n and n to 1 and a to present
        else if(present>prev)
            cost+=present-prev;
        else{
            // if present == prev then do nothing
        }
        prev=present;
    }
    cout<<cost<<endl;

    return 0;
}
*/
