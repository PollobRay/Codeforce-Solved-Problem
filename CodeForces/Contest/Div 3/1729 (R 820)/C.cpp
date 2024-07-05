//
// Created by Ray on 9/12/2022.
//
//not AC
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t;
   string s;
   int start,end,update;
   long long cost;

   cin>>t;

    for (int i = 0; i < t; ++i)
    {
        vector<int>charList[27];
        cin>>s;
        for (int j = 0; j <s.size() ; ++j)
        {
            charList[s.at(j)-'a'].push_back(j+1);
        }

        if(s.at(0)<s.at(s.size()-1)) //inc
        {
            update=1;
        }
        else
        {
            update=-1;
        }
        start=(int)(s.at(0)-'a');
        end=(int)(s.at(s.size()-1)-'a');

        for (int j = start; ; j=j+update)
        {
            if(!charList[j].empty())
            {
                for (int k = 0; k <charList[j].size() ; ++k)
                {
                    cout<<charList[j][k]<<" ";
                }
            }
            if(j==end)
                break;
        }
        cout<<endl;
    }

    return 0;
}
*/