//
// Created by Ray on 7/9/2022.
//

#include<iostream>
#include<vector>
#include<set>
using namespace std;
/*
vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    set<int> s1;
    set<int>s2;
    vector<int> hash(1005);
    vector<int> intersection;

    for (int i=0;i<nums1.size();i++)
    {
        s1.insert(nums1[i]);
    }
    for (int i=0;i<nums2.size();i++)
    {
        s2.insert(nums2[i]);
    }

    for (auto it:s1)
    {
        hash[it]++;
    }
    for (auto it:s2)
    {
        hash[it]++;
    }
    for (int i = 0; i <hash.size() ; ++i)
    {
        if(hash[i]==2)
            intersection.push_back(i);
    }

    return intersection;
}
int main()
{
    vector<int> v1={4,9,5};
    vector<int> v2={9,4,9,8,4};
    vector<int> v= intersection(v1,v2);

    for (int i = 0; i <v.size() ; ++i)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
*/