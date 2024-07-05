//
// Created by Ray on 7/14/2022.
//
// O(2^n)
// space : O(n)
/*
#include<iostream>
using namespace std;
int x[100];
int sol=0;
void display(int i,int n)
{
    cout<<endl<<"Solution "<<i<<endl;
    for (int k = 1; k <= n; k++) {
        for (int j = 1; j <=n+1 ; ++j)
        {
            cout<<"---";
        }
        cout<<endl;
        for (int j = 1; j <= n; j++)
        {   if(j==1)
            {
                cout<<"| ";
            }
            if (x[k] != j)
                cout << "  |";
            else
                cout << "Q |";
        }
        cout << endl;
    }
    for (int j = 1; j <=n+1 ; ++j)
    {
        cout<<"---";
    }
    cout<<endl<<endl;
}
bool Place(int k,int i)
{
    for (int j = 1; j <=k-1 ; ++j)
    {
        if((x[j]==i)||(abs(x[j]-i)== abs(j-k)))
            return false;
    }
    return true;
}
void NQueen(int k,int n)
{
    for (int i = 1; i <=n ; ++i)
    {
        if(Place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                //print
                display(++sol,n);
            }
            else
            {
                NQueen(k+1,n);
            }
        }
    }
}
int main()
{

    NQueen(1,4);

    return 0;
}
*/