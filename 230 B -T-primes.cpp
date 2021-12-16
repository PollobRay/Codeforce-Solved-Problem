//
// Created by Ray on 12/16/2021.
//
// if the number if the number is prefect square root print Yes otherwise not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long n,x;
    long long root;

    cin>>n;

    for (int i = 0; i <n ; ++i)
    {
        cin>>x;
        root=(long long)sqrt(x);
        if(root*root==x)
        {
            if((root!=1&&root%2!=0)||(root==2))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}