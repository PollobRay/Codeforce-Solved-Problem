//
// Created by Ray on 7/12/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{
    int t,n;
    string moves;
    int wheels[102];
    int b; //number of moves

    cin>>t;
    for (int i = 0; i <t ; ++i)
    {
        cin>>n;

        for (int j = 0; j <n ; ++j)
        {
            cin>>wheels[j];
        }

        for (int j = 0; j <n ; ++j)
        {
            cin>>b;
            cin>>moves;
            for (int k = 0; k < b; ++k)
            {
                if(moves[k]=='U')
                {
                    wheels[j]=(wheels[j]-1+10)%10;
                }
                else //down made
                {
                    wheels[j]=(wheels[j]+1)%10;
                }
            }
        }

        for (int j = 0; j < n; ++j)
        {
            cout<<wheels[j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
 */