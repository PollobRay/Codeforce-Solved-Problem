//
// Created by Ray on 7/7/2022.
//
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> targetIndices(vector<int>& nums, int target)
{
    vector<int> indecs;
    sort(nums.begin(),nums.end());

    if(nums[nums.size()-1]<target) //element are too less than target
        return indecs;
    for (int i = 0; i < nums.size(); ++i)
    {
        if(nums[i]==target)
            indecs.push_back(i);
        if(nums[i]>target)
            break;
    }
    return indecs;
}
int main()
{
    vector<int> nums={1,2,5,2,3};
    vector<int> result= targetIndices(nums,5);
    for (int i = 0; i < result.size(); ++i)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
 */