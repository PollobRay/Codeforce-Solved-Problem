//
// Created by Ray on 7/9/2022.
//

#include<iostream>
#include<vector>
using namespace std;
/*
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes)
{
    long long int sum1=0,sum2=0;
    long long int mid;

    vector<int> hash1(100002);
    vector<int> hash2(100002);
    vector<int> ans;

    for (int i = 0; i <aliceSizes.size() ; ++i) // finding array1 sum
    {
        sum1+=aliceSizes[i];
        hash1[aliceSizes[i]]++;
    }
    for (int i = 0; i <bobSizes.size() ; ++i)// finding array2 sum
    {
        sum2+=bobSizes[i];
        hash2[bobSizes[i]]++;
    }
    mid=(sum1+sum2)/2; //finding mid value that should be contain in each array

    for (int i = 1; i <=100000 ; ++i) // target for array1
    {
        long long s1,s2;
        if(hash1[i]!=0) // if i is exits in array1
        {
            s1=sum1-i; // remove i from array1 and total sum
            int need1=mid-s1; // which elemnt need to goes mid value
            if(need1<0) //
                continue;
            if(hash2[need1]!=0) // if needed value is exits in array2
            {
                s2=sum2-need1;// after removing need1 values and total sum
                if(s2+i==mid) // if add i to array2 and reach to mid
                {
                    ans.push_back(i);
                    ans.push_back(need1);
                    break;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> v1={2};
    vector<int> v2={1,3};
    vector<int> v= fairCandySwap(v1,v2);

    for (int i:v)
    {
        cout<<i<<endl;
    }

    return 0;
}
 */