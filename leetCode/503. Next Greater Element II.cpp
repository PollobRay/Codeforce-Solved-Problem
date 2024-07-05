//
// Created by Ray on 7/5/2022.
//

#include<iostream>
#include <stack>
#include <vector>
#include<algorithm>
using namespace std;
/*
vector<int> NGE(vector<int> data)
{
    vector<int> nge(data.size());
    stack<int> st;//stores index
    int max=-INT32_MAX;

    for (int i = 0; i <data.size() ; ++i)
    {
        if(data[i]>max)
            max=data[i];

        while(!st.empty()&&data[st.top()]<data[i])
        {
            nge[st.top()]=data[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int index=st.top();
        if(data[index]==max)
            nge[st.top()]=-1;
        else
        {
            for (int i = index; ; i=(i+1)%data.size())
            {
                if(data[index]<data[i])
                {
                    nge[index]=data[i];
                    break;
                }

                if(i==index-1)
                {
                    nge[index]=-1;
                    break;
                }
            }
        }
        st.pop();
    }
    return nge;
}

vector<int> nextGreaterElements(vector<int>& nums)
{
    vector<int>nge= NGE(nums);


    return nge;
}


int main()
{
    vector<int>v={-3,-3,-3};
    vector<int>nge= NGE(v);

    for (int i = 0; i <nge.size() ; ++i)
    {
        cout<<nge[i]<<" ";
    }

    return 0;
}
*/