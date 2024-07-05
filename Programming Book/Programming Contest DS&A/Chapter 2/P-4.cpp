//
// Created by pollo on 5/21/2021.
//

// 1+(2+3*4)+(5+6*7+8*9*10)+.................+n'th term

#include <iostream>
using namespace std;
/*
int main()
{
    int n; //num of term
    int totalsum=0,termsum;
    int v=1;

    cin>>n;

    for (int i = 1; i <=n ; ++i) // run up to n'th term ,( ) term
    {
        for (int j = 1; j <=i ; ++j) //inner term contain upto i'th term, inner ( )
        {
            termsum=1;
            for (int k = 1; k <=j ; ++k)
            {
                termsum=termsum*v;
                v++;
            }
           totalsum+=termsum;
        }
    }

    cout<<totalsum<<endl;
}
 */