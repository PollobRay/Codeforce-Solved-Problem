//
// Created by Ray on 4/13/2022.
//
/*
#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    bool is=false;
    int m=0,temp;
    int rem;
    temp=n;

    while(temp)
    {
        rem=temp%10;
        temp=temp/10;
        m=m*10+rem;
    }

    if(m==n)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n=0;
    int i=1;

    while(n<1000)
    {
        if (isPalindrome(i))
        {
            n++;
            cout<<n<<" : "<<i<<endl;

        }
        i++;
    }


    return 0;
}
*/