//
// Created by Ray on 6/7/2022.
//

// Find Number of Divisor and Summation of Divisor
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
        int sum=0;
        for (int j = 0; j <divisor[i].size() ; ++j)
        {
            sum+=divisor[i][j];
        }
        cout<<"Total Divisors of "<<i<<" : "<<divisor[i].size()<<endl;
        cout<<"Summation of Divisors of "<<i<<" : "<<sum<<endl;
        cout<<endl<<endl;
    }


    return 0;
}
 */