//
// Created by Ray on 7/15/2022.
//
// AC

// Divide each string in all possible sets but not empty, if exits the two divide parts then print 1 otherwise 0
/*
#include<iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int t,n;
    map<string,int> values;
    vector<string> list;

    string str;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;
        values.clear();
        list.clear();
        for (int j = 1; j <=n ; ++j)
        {
            cin>>str;
            list.push_back(str);
            if(values[str]==0)
                values[str]=1;
        }
        for(int j = 0; j <n ; ++j)
        {
            if (list[j].size()==1)
            {
                cout<<0;
            }
            else
            {
                bool print=false;
                string s;
                s.push_back(list[j][0]); //getting first character
                for (int k = 1; k <=list[j].size()-1 ; ++k)// till last-1 character
                {
                    //cout<<k<<" : "<<s<<" - "<<list[j].substr(k,list[j].size()-1)<<endl;
                    if(values[s]!=0&&values[list[j].substr(k,list[j].size()-1)]!=0)
                    {
                        cout<<1;
                        print=true;
                        break;
                    }
                    s.push_back(list[j][k]);
                }

                if (!print)
                    cout<<0;
            }
        }
        cout<<endl;
    }

    return 0;
}
 */