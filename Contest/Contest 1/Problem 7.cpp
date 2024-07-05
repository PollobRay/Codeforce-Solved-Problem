//
// Created by pollob on 3/21/2021.
//

/*
#include <iostream>
using namespace std;

int countLoop(int n)
{
    int count=0;
    while(n>=1)
    {
        //cout<<n<<" ";
        count++;
        if (n==1)
            break;

        if(n&1)
        {
            //cout<<"if execute ";
            n=3*n+1;
        }
        else
        {
            //cout<<"else execute";
            n=n/2;
        }
    }
    return count;
}

int main()
{
    int i,j,maximumlength,length;
    bool isSwap=false;

    while (cin>>i>>j)
    {
        maximumlength=0;
        if(i>j)
        {
            swap(i,j);
            isSwap=true;
        }


        for (int k = i; k <= j; ++k)
        {
            length=countLoop(k);
            if(length>maximumlength)
                maximumlength=length;
        }

        if (isSwap)
        {
            cout<<j<<" "<<i<<" "<<maximumlength<<endl;
            isSwap=false;
        }
        else
        {
            cout<<i<<" "<<j<<" "<<maximumlength<<endl;
        }

    }
}*/
