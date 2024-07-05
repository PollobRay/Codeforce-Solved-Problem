//
// Created by Ray on 8/30/2022.
//
//AC
/*

#include<iostream>
using namespace std;

int main()
{
    int t;
    int n;
    string s;
    string tmr="Timur";

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>n;
        cin>>s;
        if(n==5)
        {
            int c=0;
            for (int j = 0; j < 5; ++j)
            {
                for (int k = 0; k <5 ; ++k)
                {
                    if (s.at(k)==tmr.at(j))
                    {
                        s[k]=' ';
                        c++;
                        break; //got Not Accepted for this
                    }
                }
            }
            if(c==5)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
*/