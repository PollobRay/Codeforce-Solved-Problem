//
// Created by Ray on 7/10/2022.
//
// AC
/*
#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;

void combination(int index,vector<int> &values,int sum, vector<int> &com,vector<vector<int> > &subset)
{
    if(sum==0)
    {
        subset.push_back(com);
        return;
    }
    for (int i = index; i <values.size() ; ++i)
    {
        sum-=values[i];

        if(sum>=0)
        {
            com.push_back(values[i]);
            combination(i,values,sum,com,subset);
            com.pop_back();
        }
        sum+=values[i];
    }
}
vector<vector<int> > combinationSum(vector<int> &A, int B)
{
    //sort & only unique value
    set<int> values(A.begin(),A.end());
    A.assign(values.begin(),values.end());

    vector<int> s;
    vector<vector<int> >result;
    combination(0,A,B,s,result);

    return result;
}
int main()
{

    vector<int> v={6,5,7,1,8,2,9,9,7,7,9};

    vector<vector<int>> result= combinationSum(v,6);

    for (vector<int> v:result)
    {
        for (int i = 0; i <v.size() ; ++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
*/