//
// Created by Ray on 7/10/2022.
//
/*
#include <iostream>
using namespace std;

int kthGrammar(int n, int k)
{

    if(n==1&&k==1)
        return 0;
    int mid=(1<<(n-1))/2;

    if(k<=mid)
        return kthGrammar(n-1,k);
    else
        return !kthGrammar(n-1,k-mid);
}
int main()
{
    for (int i = 1; i <=16 ; ++i)
    {
        cout<<kthGrammar(5,i)<<" ";
    }


    return 0;
}
*/