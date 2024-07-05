//
// Created by pollo on 3/20/2021.
//

/*
#include<iostream>
using namespace std;

int findChar(int N)
{
    int i=1,value=1;

    while(i<=N)
    {
        if (value<10)
        {
            if(i==N)
                return value;
            i++;
        }
        else if(value>=10&&value<=99)
        {
            if(i==N)
                return value/10;
            else if (i+1==N)
                return value%10;

            i=i+2;
        }
        else if(value>=100&&value<=999)
        {
            if(i==N)
                return value/100;
            else if(i+1==N)
                return (value/10)%10;
            else if(i+2==N)
                return value%10;

            i=i+3;
        }
        else
        {
            if(i==N)
                return 1;
            else
                return 0;

            i=i+4;
        }

        value++;
    }

}
int main()
{
    int N,loc;

    cin>>N;

    loc=findChar(N);
    cout<<loc<<endl;

    return 0;
}
*/
