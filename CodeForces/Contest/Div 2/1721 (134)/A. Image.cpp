//
// Created by Ray on 8/27/2022.
//
//AC
/*
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int noc=0;
    char c1,c2;

    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        vector<int> color(26,0);
        noc=0;
        cin>>c1>>c2;
        color[c1-'a']++;
        color[c2-'a']++;
        cin>>c1>>c2;
        color[c1-'a']++;
        color[c2-'a']++;

        for (int j = 0; j < 26; ++j)
        {
            if(color[j]!=0)
                noc++;
        }
        cout<<noc-1<<endl;
    }

    return 0;
}
 */