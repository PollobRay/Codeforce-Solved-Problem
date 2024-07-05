//
// Created by Ray on 8/25/2022.
//
// AC
/*
#include<iostream>
#include<vector>
using namespace std;

int bigMod(int a,int b,int M)
{
    int ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*1LL*a)%M;
        a=(a*1LL*a)%M;
        b=b>>1; //b=b/2
    }
    return ans;
}

int superPow(int a, vector<int>& b)
{
    int ans=1;
    int exp=1;
    int M=1337;
    int pow;
    a=a%M;
    int phi=1140; //phi(1337)


    for (int i = b.size()-1; i >=0 ; i--)
    {
        pow=(b[i]*exp)%phi;

        ans=(ans* bigMod(a,pow,M))%M;
        exp=(exp*10)%phi;
    }
    return ans;
}

int main()
{

    vector<int> p={4,3,3,8,5,2};
    int b=1;

    cout<<superPow(b,p)<<endl;
   //cout<<bigMod(78267%1337,68425,1337);

    return 0;
}
*/