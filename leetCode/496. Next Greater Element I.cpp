//
// Created by Ray on 7/5/2022.
//

#include<iostream>
#include <stack>
#include <vector>
#include<map>
using namespace std;
/*
vector<int> NGE(vector<int> data)
{
    vector<int> nge(data.size());
    stack<int> st;//stores index

    for (int i = 0; i <data.size() ; ++i)
    {
        while(!st.empty()&&data[st.top()]<data[i])
        {
            nge[st.top()]=data[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{
    map<int,int> values;//values, index
    for (int i = 0; i < nums2.size(); ++i)
    {
        values.insert(make_pair(nums2[i],i));
    }
    vector<int>nge= NGE(nums2);
    vector<int>nge1(nums1.size());
    for (int i = 0; i <nums1.size() ; ++i)
    {
        nge1[i]=nge[values[nums1[i]]];
    }
    return nge1;
}
 */