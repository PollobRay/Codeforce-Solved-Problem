//
// Created by Ray on 12/9/2021.
//

/*
#include <iostream>
using namespace std;

void bubbleSort(int ar[],int b[],int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = 0; j < n-i-1; ++j)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
                swap(b[j],b[j+1]);
            }

        }
    }
}

int main()
{
    int n;
    long long s;
    int x[1005],y[1005];
    bool isYes=true;

    cin>>s>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>x[i]>>y[i];
    }

    bubbleSort(x,y,n);

    for (int i = 0; i < n; ++i)
    {
        if(s>x[i])
        {
            s+=y[i];
        }
        else
        {
            isYes=false;
            break;
        }
    }

    if(isYes)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}*/
