//
// Created by Ray on 8/1/2022.
//
// not AC
/*
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int t1;

    cin>>t1;

    for (int i = 0; i < t1; ++i)
    {
        int n,H,M;
        int h,m;

        cin>>n>>H>>M;
        vector<pair<int,int>>time(n);

        for (int i = 0; i < n; ++i)
        {
            cin>>time[i].first>>time[i].second;
        }

        sort(time.begin(),time.end());

        int lastH=0,lastM=0;
        bool isF=false;
        bool isSame=false;
        int dif=0;

        for (pair<int,int> t:time)
        {
            if(t== make_pair(H,M))
            {
                isSame=true;
                break;
            }
            if(t.first>=H&&t.second>M)
            {
                lastH=t.first;
                lastM=t.second;
                isF=true;
                break;
            }
        }
        if (isSame)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            if (isF)
            {
                dif=((lastH-H)*60)+(lastM-M);
                cout<<(dif/60)%24<<" "<<dif%60<<endl;
            }
            else
            {
                dif=(24*60)-((H*60)+M)+(time[0].first*60)+time[0].second;
                cout<<(dif/60)%24<<" "<<dif%60<<endl;
            }
        }


    }

    return 0;
}
*/