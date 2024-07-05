//
// Created by Ray on 7/24/2022.
//
// AC
/*
#include<iostream>
#include <vector>
using namespace std;

vector<vector<int>> subset;
void generate(vector<int> &nums,int i,vector<int> &sub)
{
    if(i==nums.size())
    {
        subset.push_back(sub);
        return;
    }

    generate(nums,i+1,sub); //i not in sub
    sub.push_back(nums[i]);
    generate(nums,i+1,sub); //i is in sub
    sub.pop_back(); //backtrack
}
vector<vector<int>> subsets(vector<int>& nums)
{
    vector<int> sub;
    generate(nums,0,sub);
    return subset;
}

int main()
{
    vector<int> nums{0};

    vector<vector<int>> sub= subsets(nums);

    for (int i = 0; i < sub.size(); ++i)
    {
        for (int j = 0; j <sub[i].size() ; ++j)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
 */