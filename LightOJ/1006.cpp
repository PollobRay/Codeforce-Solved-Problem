//
// Created by Ray on 5/31/2022.
//

#include<iostream>
using namespace std;

/*
void generate(int arr[],long a,long b,long c,long d,long e,long f,int n)
{
    a=a%10000007;
    b=b%10000007;
    c=c%10000007;
    d=d%10000007;
    e=e%10000007;
    f=f%10000007;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    arr[5]=f;

    for (int i = 6; i <=n ; ++i)
    {
        arr[i]= (((((((((arr[i-1]+arr[i-2])%10000007)+arr[i-3])%10000007)+arr[i-4])%10000007)+arr[i-5])%10000007)+arr[i-6])%10000007;
    }
}

int main()
{

    int arr[10005];
    long a,b,c,d,e,f;
    int t,n;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        generate(arr,a,b,c,d,e,f,n);
        cout<<"Case "<<i<<": "<<arr[n]<<endl;
    }

    return 0;
}

 */