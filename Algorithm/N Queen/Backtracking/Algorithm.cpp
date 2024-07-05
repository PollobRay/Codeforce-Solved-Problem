//
// Created by Ray on 7/15/2022.
//
/*
// measure first or left to right diagonal: subtraction of row and column is same
// measure second or right to left diagonal: addition of row and column is same

#include <iostream>
using namespace std;

int queen[25]; // queen[i]= column number of queen at i'th row

// arrays to mark if there is queen or not
int column[20];// store queens column no
int diagonal1[40]; // first diagonal or left to right
int diagonal2[40]; // second diagonal or right ot left

void diaplay(int n)
{
    //cout<<endl<<"Solution "<<i<<endl;
    for (int i = 1; i <= n; i++)
    {
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
            if (queen[i] != j)
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

//make sure column, diagonal1, diagonal2 are all 0 initially
// call with nqueen(1,8) for 8 queen problem

void nqueen(int at,int n)
{
    if(at==n+1)
    {
        // print
        diaplay(n);
        return;
    }

    for (int i = 1; i <=n ; ++i)
    {
        if(column[i] || diagonal1[i+at] || diagonal2[n+i-at])
        {
            // addition of row and column is : i+at
            //subtraction of row and column is : i-at but it can be negative hence a prefix is added  that is 'n'
            continue;
        }
        queen[at]=i;
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=1;

        nqueen(at+1,n);

        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=0; // Backtracking
    }
}

int main()
{
    nqueen(1,8);

    return 0;
}
 */