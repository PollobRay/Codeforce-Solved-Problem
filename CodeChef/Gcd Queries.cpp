//
// Created by Ray on 9/6/2022.
//
// AC
/*
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,q;
    int l,r;


    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>n>>q;

        vector<int> A(n+1);
        vector<int> pre(n+1);
        vector<int> post(n+1+1);

        pre[0]=0;
        post[n+1]=0;

        for (int j = 1; j <=n ; ++j)
        {
            cin>>A[j];

            pre[j]=__gcd(pre[j-1],A[j]);
        }
        for (int j = n; j>=1 ; j--)
        {
            post[j]=__gcd(post[j+1],A[j]);
        }

        for (int j = 1; j <=q ; ++j)
        {
            cin>>l>>r;
            cout<<__gcd(pre[l-1],post[r+1])<<endl;
        }
    }


    return 0;
}
 */