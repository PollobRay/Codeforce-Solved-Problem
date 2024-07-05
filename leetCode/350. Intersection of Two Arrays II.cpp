//
// Created by Ray on 7/9/2022.
//

#include<iostream>
#include<vector>
using namespace std;
/*
vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
 vector<int> hash1(1005);
 vector<int> hash2(1005);
 vector<int> intersection;

    for (int i = 0; i <nums1.size() ; ++i)
    {
        hash1[nums1[i]]++;
    }
    for (int i = 0; i <nums2.size() ; ++i)
    {
        hash2[nums2[i]]++;
    }
    for (int i = 0; i <=1000 ; ++i)
    {
        int min=hash1[i]>hash2[i]?hash2[i]:hash1[i];
        for (int j = 0; j < min; ++j)
        {
            intersection.push_back(i);
        }
    }
    return intersection;

}
int main()
{
    vector<int> v1={4,9,5};
    vector<int> v2={9,4,9,8,4};
    vector<int> v= intersect(v1,v2);
    for (auto it:v)
    {
        cout<<it<<endl;
    }

    return 0;
}
 */