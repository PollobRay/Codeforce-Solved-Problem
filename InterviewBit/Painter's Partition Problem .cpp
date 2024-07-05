//
// Created by Ray on 8/9/2022.
//
//https://www.interviewbit.com/problems/painters-partition-problem/
//AC
/*
#include <iostream>
#include <vector>
using namespace std;

int predicate(int blockMaxValue,vector<int> &value,int A)
{
    int maxV=-1;
    int blockSize=0;
    int blockNumber=0;
    for (int i = 0; i <value.size() ; ++i)
    {
        if(value[i]>blockMaxValue)
        {
            return 0;
        }
        blockSize+=value[i];
        if(blockSize>blockMaxValue)
        {
            maxV=max(maxV,blockSize-value[i]);
            blockNumber++;
            blockSize=value[i];
            //cout<<"spilt block "<<blockNumber<<"\n";
        }
    }
    maxV=max(maxV,blockSize);
    if(blockNumber<A)
        return maxV;
    return 0;
}

int binarySearch(int lo,int hi,vector<int> &value,int A)
{
    int mid;
    while(hi-lo>1)
    {
        mid=(lo+hi)/2;
        //cout<<"Mid "<<mid<<endl;
        if(predicate(mid,value,A)!=0)
        {
            hi=mid;
            //cout<<"True\n";
        }
        else
            lo=mid+1;
    }
    if(predicate(lo,value,A))
        return predicate(lo,value,A);
    return predicate(hi,value,A);
}

int main()
{
    vector<int> v={1, 8, 11, 3};
    int A=10;
    int B=1;
    int Mod=10000003;

    long long result=binarySearch(1,1000000000,v,A)%Mod;
    result=((result%Mod)*(B%Mod))%Mod;
    int r=(int)result;
    cout<< r;

    return 0;
}
 */