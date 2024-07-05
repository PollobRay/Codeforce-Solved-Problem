//
// Created by Ray on 7/6/2022.
//
/*
#include <iostream>
#include <set>
#include<vector>
using namespace std;
vector<int> kWeakestRows(vector<vector<int> >& mat, int k)
{
    set<pair<int,int> >list; //number of list, row no
    vector<int> kWeakest; //index;

    for (int i = 0; i <mat.size() ; ++i)
    {
        int one=0;
        for (int j = 0; j <mat[i].size() ; ++j)
        {
            if(mat[i][j]==1)
                one++;
        }
        list.insert(make_pair(one,i));
    }
    int num=1;
    for (auto  it:list)
    {
        kWeakest.push_back(it.second);
        if(num==k)
            break;
        num++;
    }
    return kWeakest;
}
int main()
{
    vector<vector<int> >m={{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0}};
    vector<int> list= kWeakestRows(m,5);

    for (int i :list)
    {
        cout<<i<<endl;
    }

    return 0;
}
 */