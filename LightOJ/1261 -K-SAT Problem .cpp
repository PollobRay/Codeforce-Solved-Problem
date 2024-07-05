//
// Created by Ray on 6/2/2022.
//

#include<iostream>
using namespace std;
bool found(int arr[],int n,int k)
{
    for (int i = 1; i <= n; ++i)
    {
        if(arr[i]==k)
            return true;
    }
    return false;
}
/*
int main()
{
    int t,n,m,k,p;
    int wises[32][32];
    int sol[32];
    bool yes=true;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        //input
        cin>>n>>m>>k;
        yes=true;
        for (int j = 1; j <=n ; ++j)
        {
            for (int l = 1; l <=k ; ++l)
            {
                cin>>wises[j][l];
            }
        }
        cin>>p;
        for (int j = 1; j <=p ; ++j)
        {
            cin>>sol[j];
        }

        //check
        for (int j = 1; j <=n ; ++j)
        {
            int totalTaken=0;
            for (int l = 1; l <=k ; ++l)
            {
                if(wises[j][l]>0)
                {
                    if (found(sol,p,wises[j][l]))
                    {
                        totalTaken++;
                        break;
                    }
                }
                else
                {
                    if(!found(sol,p,(wises[j][l]*-1)))
                    {
                        totalTaken++;
                        break;
                    }
                }

            }
            if (totalTaken==0)
            {
                yes=false;
                break;
            }
        }

        //print
        if(yes)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;


    }

    return 0;
}
*/