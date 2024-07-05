//
// Created by Ray on 7/5/2022.
//

#include<iostream>
#include <vector>
using namespace std;

/*
int findPosition(vector<int> &d,int curPos,int k)
{
    if(d.size()==1)
        return d[0];
    int del=(curPos+k-1)%d.size(); //delete k'th element in circular list -1 is for 0 based index
    d.erase(d.begin()+del); // delete k'th element

    return findPosition(d,del,k);
}
int josephus(int n, int k)
{
    vector<int> d(n);
    for (int i = 0; i <n ; ++i)
    {
        d[i]=i+1;
    }
    return findPosition(d,n,k);
}

int main()
{

    cout<<josephus(5,3);


    return 0;
}

 */