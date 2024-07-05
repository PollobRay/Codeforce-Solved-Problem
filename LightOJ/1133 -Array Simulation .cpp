//
// Created by Ray on 6/1/2022.
//

#include<iostream>
#include<algorithm>
#include <cstring>

using namespace std;
/*
int main()
{
    int t,n,m;
    char c[10];
    long d,k;

    long array[110];


    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n>>m;

        for (int j = 0; j < n; ++j)
        {
            cin>>array[j];
        }

        for (int j = 0; j < m; ++j)
        {
            cin>>c;

            if(!strcmp(c,"S"))//sum
            {
                cin>>d;
                for (int l = 0; l < n; ++l)
                {
                    array[l]=array[l]+d;
                }

            }
            else if(!strcmp(c,"M")) //multiply
            {
                cin>>d;
                for (int l = 0; l < n; ++l)
                {
                    array[l]=array[l]*d;
                }
            }
            else if(!strcmp(c,"D")) //divide
            {
                cin>>d;
                for (int l = 0; l < n; ++l)
                {
                    array[l]=array[l]/d;
                }
            }
            else if(!strcmp(c,"R"))//reverse
            {
                reverse(array,array+n);
            }
            else if(!strcmp(c,"P"))//swap
            {
                cin>>d>>k;
                swap(array[d],array[k]);
            }
        }

        cout<<"Case "<<i<<": "<<endl;
        for (int j = 0; j <n ; j++)
        {
            cout<<array[j];
            if(j!=n-1)
                cout<<" ";
        }

        cout<<endl;

    }

    return 0;
}
 */