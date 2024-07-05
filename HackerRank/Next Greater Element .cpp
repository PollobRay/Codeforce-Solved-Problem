//
// Created by Ray on 7/5/2022.
//
/*
#include<iostream>
#include <stack>
#include <vector>
using namespace std;

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

int main()
{
    int n;
    vector<int>data;
    int v;

    cin>>n;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>v;
        data.push_back(v);
    }
    vector<int>nge= NGE(data);
    for (int i = 0; i <n ; ++i)
    {
        cout<<data[i]<<" "<<nge[i]<<endl;
    }

    return 0;
}
 */