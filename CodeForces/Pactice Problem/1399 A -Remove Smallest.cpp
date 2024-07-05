//
// Created by Ray on 12/19/2021.
//

/*
#include <iostream>
using namespace std;

int main()
{

    int t,n;
    int d,dprev;
    bool isYes;


    cin>>t;

    for (int i = 0; i <t ; ++i)
    {
        cin>>n;
        isYes=true;
        int data[102]={0};
        int min,max;
        min=101;
        max=0;
        for (int j = 0; j <n ; ++j)
        {
           cin>>d;

            data[d]++;
            if (min>d)
                min=d;
            if (max<d)
                max=d;
        }

        dprev=min;

        for (int j = min+1; j <=max ; ++j)
        {
            if (data[j]>0)
            {
                if(abs(j-dprev)>1)
                {
                    isYes=false;
                    break;
                }
                dprev=j;

            }


        }

        if (isYes)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}*/
