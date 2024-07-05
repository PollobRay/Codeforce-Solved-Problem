//
// Created by Ray on 6/7/2022.
//
// AC
/*
#include<iostream>
using namespace std;

int main()
{
    int t;
    int n;
    int h2,h1,h3;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;
        if(n%3==0)
        {
           h1=n/3 +1;
           h2=n/3 ;
           h3=n/3 -1;
        }
        else if(n%3==1)
        {
            h1=n/3 +2;
            h2=n/3 +1;
            h3=n/3 -2;
            if(h3==0)
            {
               h2--;
               h3++;
            }
        }
        else if(n%3==2)
        {
            h1=n/3 +2;
            h2=n/3 +1;
            h3=n/3 -1;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }

    return 0;
}
*/