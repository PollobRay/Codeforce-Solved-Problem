//
// Created by Ray on 8/14/2022.
//
//AC
/*
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    map<int,int> occurance;//values number of occurance

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>k;
        occurance[k]=occurance[k]+1;
        //cout<<k<<" "<<occurance[k]<<endl;
    }

    vector<int> countOccurance(n+1);

    for (auto it:occurance)
    {
        countOccurance[it.second]++;//increase occurance of number
    }

    int max=0;
    int value=0;
    for(int i=1;i<=n;i++)
    {
        if(countOccurance[i]>max)
        {
            max = countOccurance[i];
            value=i;
        }
    }
    cout<<value<<endl;


    return 0;
}
*/