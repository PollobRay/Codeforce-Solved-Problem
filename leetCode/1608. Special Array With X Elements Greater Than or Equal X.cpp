//
// Created by Ray on 7/7/2022.
//
/*
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int specialArray(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int pos=-1;
    int totalElement=nums.size();
    for (int i = 0; i <nums.size() ; ++i)
    {
        if(nums[i]>0&&pos==-1)
            pos=i;
        if(pos!=-1)
        {
            totalElement=nums.size()-pos;
            if(totalElement<=nums[pos])
                break;
            else
                pos++;
        }
    }
    if(pos==-1||pos==nums.size()||count(nums.begin(), nums.begin()+pos, totalElement))// 1)if pos not set 2) pos greater than original position 3) x have not be in remaining part
        return -1;
    return totalElement;
}
int main()
{

    vector<int>num={0,4,3,0,4};

    cout<<specialArray(num);

    return 0;
}
*/