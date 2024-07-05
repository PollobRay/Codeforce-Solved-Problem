//
// Created by Ray on 7/5/2022.
//
/*
#include<iostream>
using namespace std;
long long int digitSumInt(long long int d)
{
    if(d==0)
        return 0;
    return d%10+ digitSumInt(d/10);
}

long long int digitSum(string &s,int k)
{
    int pos=0;
    long long int sum=0;
    for (long long int i = 0; i <s.size() ; ++i)
    {
        sum+=(s[i]-'0')*k;

    }
    return sum;
}
long long int super_digit(string &s,int k)
{
    long long int values;
    values= digitSum(s,k);

    while(!(values>=0&&values<=9))
    {
        values= digitSumInt(values);
    }
    return values;
}
int main()
{
    string num;
    int k;
    cin>>num>>k;

    cout<<super_digit(num,k);

    return 0;
}
 */