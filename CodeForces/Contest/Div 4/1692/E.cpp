//
// Created by Ray on 6/16/2022.
//
// select longest sub array size such that sum of sub array element == s

#include <iostream>
using namespace std;
/*
int main()
{
    int t;
    int n,s;
    int d;
    int ones[200005]={0},oneinx;
    int prefixSum[200005]={0};
    int FstOne,LstOne;
    int sum=0;
    int minSum;

    cin>>t;
    for (int i = 1; i <=t ; ++i)
    {
        cin>>n>>s;

        minSum=500000; //maximum deleted element from array to make longest sub array

        oneinx=0; //number of one
        sum=0; //sum of array
        for (int j = 1; j <=n ; ++j)
        {
            cin>>d;
            sum+=d;
            if(d==1)
            {
                ones[++oneinx]=j; //put oneinx'th one location
                prefixSum[oneinx]=prefixSum[oneinx-1]+1; //prefix sum of array
            }
        }


        if(sum==s) //if sum equal
            cout<<0<<endl;
        else if(sum<s) //not possible
            cout<<-1<<endl;
       else
        {
            sum=0; //sum of sub array
            FstOne=0; //first one location
            LstOne=0; //last one location
            int fst=0; //first pointer
            for (int j = 1; j<=oneinx ;)
            {
                sum=prefixSum[j]-prefixSum[fst]; //sum of sub array
                if(sum>s) //increase first pointer
                {
                    fst++;
                }
                else if(sum==s)
                {
                    FstOne=ones[fst];
                    if(j==oneinx)
                        LstOne=n;
                    else
                        LstOne=ones[j+1]-1; //before j+1'th location
                    if(FstOne+n-LstOne<minSum)
                        minSum=FstOne+n-LstOne;// define min element remove to make sub array
                    j++; //increase last pointer
                }
                else
                    j++;
            }
            cout<<minSum<<endl;
        }
    }

    return 0;
}
 */