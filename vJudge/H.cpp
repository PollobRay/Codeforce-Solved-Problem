//
// Created by Ray on 8/9/2022.
//
// Not AC
/*
#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
   int k;
   cin>>n>>k;
   vector<int> A(n+1);
   vector<int> B(n+1);
   int x11,x12,x21,x22;



    for (int i = 1; i <=n; ++i)
    {
        cin>>A[i];
    }
    for (int i = 1; i <=n; ++i)
    {
        cin>>B[i];
    }
    if(n==1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    x11=A[1];
    x12=B[1];
    int i;
    for (i = 2; i <=n ; ++i)
    {
        x21=A[i];
        x22=B[i];

        if(abs(x11-x21)<=k||abs(x11-x22)<=k||abs(x12-x21)<=k||abs(x12-x22)<=k)
        {
            //cout<<i<<endl;
            x11=x21;
            x12=x22;
            continue;
        }
        else
            break;

    }
    if(i==n+1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;
}
 */