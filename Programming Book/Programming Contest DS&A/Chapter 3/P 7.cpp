//
// Created by Ray on 6/7/2022.
//
// Find Divisor
// O ( n log n )

#include <iostream>
#include<vector>
using namespace std;
/*
vector<int> divisor[1000002];
void divisorFinder(int n)
{
    for (int i = 1; i <=n ; ++i)
    {
        for (int j = i; j <=n ; j+=i)
        {
            divisor[j].push_back(i);
        }
    }
}
int main()
{
    int n;

    cin>>n;

    divisorFinder(n);

    for (int i = 1; i <=n ; ++i)
    {
        cout<<"Divisor of "<<i<<endl;
        for (int j = 0; j <divisor[i].size() ; ++j)
        {
            cout<<divisor[i][j]<<" ";
        }
        cout<<endl<<endl;
    }


    return 0;
}
*/