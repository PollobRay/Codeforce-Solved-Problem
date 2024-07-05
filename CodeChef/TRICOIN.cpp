// AC
//
// Created by Ray on 25-Nov-22.
//
/*
#include <iostream>
using namespace std;

int lower_bound(long long N)
{
    int l=1;
    int h=44721;

    int mid;
    long long value;

    while(h-l>1)
    {
        mid=(h+l)/2;

        if(mid&1)
        {
            value=(mid+1)/2;
            value=value*mid;
        }
        else
        {
            value=(mid)/2;
            value=value*(mid+1);
        }
        if(value<N)
            l=mid;
        else
            h=mid;
    }
    if((h*1LL*(h+1))/2.0<=N)
        return h;
    else if((l*1LL*(l+1))/2.0<=N)
        return l;

    return 1;
}

int main()
{
    int T;
    long long N;

    cin>>T;

    for (int i = 0; i <T ; ++i)
    {
        cin>>N;
        cout<<lower_bound(N)<<endl;
    }
    return  0;
}
 */