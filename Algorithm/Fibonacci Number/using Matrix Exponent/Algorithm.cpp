//
// Created by Ray on 6/30/2022.
//

// Time : O(logn)
/*
#include<vector>

using namespace std;

vector<vector<long long> > matrixMultiplication(vector<vector<long long> > a,vector<vector<long long> > b)
{
    vector<vector<long long> >result{{0,0},{0,0}};
    result[0][0] = a[0][0] * b[0][0] +
                    a[0][1] * b[1][0];
    result[0][1] = a[0][0] * b[0][1] +
                    a[0][1] * b[1][1];
    result[1][0] = a[1][0] * b[0][0] +
                    a[1][1] * b[1][0];
    result[1][1] = a[1][0] * b[0][1] +
                    a[1][1] * b[1][1];

    return result;
}
vector<vector<long long> > bigMod(int n)
{
    if(n==0)
        return vector<vector<long long> >{{1,0},{0,1}}; // identity matrix

    vector<vector<long long> >x= bigMod(n/2);
    //multiplication
    x= matrixMultiplication(x,x);
    if(n%2==1)
    {
        //multiplication
        x= matrixMultiplication(x,vector<vector<long long> >{{1,1},{1,0}}); //multiplication with ideal case
    }
    return x;
}
long long fibonacci(int n)
{
    if(n==0)
        return 0;

    vector<vector<long long> > rlt= bigMod(n-1);

    return (rlt[0][0]*1);// (rlt[0][0]*F1)+(rlt[0][1]*F0) here F1=1 F0=0
}
*/