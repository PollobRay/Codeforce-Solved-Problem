//
// Created by Ray on 8/30/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    int n;

    char row1[102];
    char row2[102];
    cin>>t;

    for (int i = 0; i <t ; ++i)
    {
        cin>>n;
        for (int j = 0; j < n; ++j)
        {
            cin>>row1[j];
        }
        for (int j = 0; j < n; ++j)
        {
            cin>>row2[j];
        }
        int c=0;
        for (int j = 0; j < n; ++j)
        {
            if(row1[j]==row2[j]||((row1[j]=='G'||row1[j]=='B')&&(row2[j]=='G'||row2[j]=='B')))
                c++;
        }
        if(c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
*/