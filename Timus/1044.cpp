//
// Created by Ray on 5/30/2022.
//

#include<iostream>
using namespace std;
/*
int sumDigit(int v,int n)
{
    if(n==1)
        return v;
    else if(n==2)
        return (v/10)+(v%10);
    else if(n==3)
        return (v/100)+((v%100)/10)+((v%100)%10);
    else // n==4
        return (v/1000)+((v%1000)/100)+(((v%1000)%100)/10)+(((v%1000)%100)%10);
}

int main()
{
    int N;
    int sumFirst,sumSecond;
    int limit;
    int count=0;

    cin>>N;

    if(N==2)
        limit=9;
    else if(N==4)
        limit=99;
    else if(N==6)
        limit=999;
    else
        limit=9999;

    for (int i = 0; i <= limit; ++i)
    {
        sumFirst= sumDigit(i,N/2);
        for (int j = 0; j <=limit ; ++j)
        {
            sumSecond= sumDigit(j,N/2);
            if(sumFirst==sumSecond)
                count++;
        }
    }
    cout<<count<<endl;
}
*/