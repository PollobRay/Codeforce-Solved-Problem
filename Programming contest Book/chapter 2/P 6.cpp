//
// Created by Ray on 4/13/2022.
//

#include<iostream>
using namespace std;

int add(int A[],int n)
{
    int a=A[n];
    if(a+1==10)
    {
        A[n]=0;
        return add(A,n-1);
    }
    else
    {
        A[n]=a+1;
        return n;
    }
}

bool isPrindrome(int A[],int start,int end)
{
    int n=(end-start+1)/2;

    for (int i = 0; i <n ; ++i)
    {
        if(A[start+i]!=A[end-i])
            return false;
    }
    return true;
}

void print(int A[],int start,int end)
{
    for (int i = start; i <=end ; ++i)
    {
        cout<<A[i];
    }
    cout<<endl;
}
/*
int main()
{
    int n=0,total;
    int num[16]={0};
    int start,end;
    start=15;
    end=15;
    num[15]=1;
    int a;

    cin>>total;

    while(n<total)
    {
        if(isPrindrome(num,start,end))
        {
            n++;
            cout<<n<<" : ";
            print(num,start,end);

        }
        a=add(num,end);
        if(a<start)
            start=a;
    }

    return 0;
}
*/
