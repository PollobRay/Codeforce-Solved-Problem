//
// Created by Ray on 8/25/2022.
//
// AC
/*
#include<iostream>
using namespace std;

string mul(string x)
{
    string r=x;
    r.push_back('0');


    return r;
}
string add(string x,int b)
{
    string result;
    string r;
    int a,rem=0;
    int sum;
    for (int i = x.size()-1; i>=0;i--)
    {

            a=(x.at(i)-'0');
            sum=a+b+rem;
            if(sum>9)
            {
                rem=sum/10;
                sum=sum%10;
            }
            else
                rem=0;
            b=0;
            result.push_back((char)(sum+'0'));

    }
    if(rem)
        result.push_back((char)(rem+'0'));

    for (int i = result.size()-1; i >=0 ; i--)
    {
        r.push_back(result.at(i));
    }

    return r;
}

int main()
{

    int n;
    int c[9];
    string x;

    cin>>n;
    for (int i = 0; i < 9; ++i)
    {
        cin>>c[i];
    }
    for (int i = 8; i >=0 ; i--)
    {
        if(n>=c[i])
        {
            n=n-c[i];
            x= mul(x);
            x= add(x,i+1);
            i++;
        }
    }
    cout<<x<<endl;

    return 0;
}

*/