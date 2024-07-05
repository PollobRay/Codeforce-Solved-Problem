//
// Created by Ray on 6/14/2022.
//
/*
#include <iostream>
using namespace std;

int main()
{
    int t,n;
    int d[55];
    int operation,length;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for (int j = 0; j < n; ++j)
        {
            cin>>d[j];
        }

        //search
       operation=0;
        for (int j = 0; j <n ; ++j)
        {
            if(d[j]==-1)
                continue;
            for (int k = j+1; k <n ; ++k)
            {
                if(d[j]==d[k])
                {
                    operation++;
                    d[k]=-1;
                }
            }
        }


        length=0;
        for (int j = 0; j <n ; ++j)
        {
            if (d[j]==-1)
                continue;
            length++;
        }
        if(operation&1)
            length--;
        cout<<length<<endl;

    }
    return 0;
}
 */