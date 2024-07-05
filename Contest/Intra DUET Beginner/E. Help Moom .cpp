//
// Created by Ray on 8/17/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{
    int n,m,k;

    cin>>n>>m>>k;

    string x,y;

    cin>>x;
    cin>>y;

    string result;

    int rem=0;
    int sum=0;
    int a,b;

    for (int i = n-1,j=m-1; i>=0 ||j>=0 ; j--,i--)
    {
        if(i>=0&&j>=0)//both
        {
            a=(x.at(i)-'0');
            b=(y.at(j)-'0');
            sum=a+b+rem;
            if(sum>k-1)
            {
                rem=sum/k;
                sum=sum%k;
            }
            else
                rem=0;
            result.push_back((char)(sum+'0'));
        }
        else if(i>=0)//x
        {
            a=(x.at(i)-'0');
            sum=a+rem;
            if(sum>k-1)
            {
                rem=sum/k;
                sum=sum%k;
            }
            else
                rem=0;
            result.push_back((char)(sum+'0'));
        }
        else // y
        {
            b=(y.at(j)-'0');
            sum=b+rem;
            if(sum>k-1)
            {
                rem=sum/k;
                sum=sum%k;
            }
            else
                rem=0;
            result.push_back((char)(sum+'0'));
        }
    }
    if(rem)
        result.push_back((char)(rem+'0'));

    for (int i = result.size()-1; i >=0 ; i--)
    {
        cout<<result.at(i);
    }
    cout<<endl;

    return 0;
}
*/