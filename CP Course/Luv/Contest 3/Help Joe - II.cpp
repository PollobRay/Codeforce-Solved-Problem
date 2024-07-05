//
// Created by Ray on 7/29/2022.
//
// AC
/*
#include<iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    long long n,m,q,x;
    long long a;
    set<long long> values;

    cin>>n>>m;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>a;
        values.insert(a%m);
    }

    vector<long long> rem(values.begin(),values.end());
    values.clear();

    long long rem1,need,rem2;

    vector<long long> ::iterator it;


    cin>>q;

    for (int i = 1; i <=q ; ++i)
    {
        cin>>x;

        x=x%m;


        rem1=(rem[rem.size()-1]+x)%m; //using last

        need=m-x-1;

        it=lower_bound(rem.begin(), rem.end(), need);
        int index=it-rem.begin();


        if(index==rem.size())
        {
            rem2=0;
        }
        else
        {
            if(rem[index]==need)
            {
                rem2=m-1;
            }
            else
            {
                if(index==0)
                {
                    rem2=(x+rem[index])%m;
                }
                else
                {
                    rem2=(x+rem[index-1])%m;
                }
            }
        }

        if(rem1>rem2)
            cout<<rem1<<endl;
        else
            cout<<rem2<<endl;

    }




    return 0;
}
*/