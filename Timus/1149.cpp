//
// Created by Ray on 6/4/2022.
//
// not AC
#include<iostream>
#include <string>
using namespace std;
/*
void generateA(string A[],int N)
{
    A[1]="sin(1)";
    for (int i = 2; i <=N; ++i)
    {
        A[i]=A[i-1].substr(0,A[i-1].size()-1);
        if(i&1)
        {
            A[i].append("+"); // put sign

        }
        else {
            A[i].append("–"); //  put sign

        }
        string s="";
        for (int j = 1; j <=i ; ++j)
        {
            s.append(")");
        }
        A[i]=A[i].append("sin("+ to_string(i)+s);
    }
}

string generateS(string A[],int N)
{
    string s="";
    for (int j = 1; j <N ; ++j)
    {
        s.append("(");
    }

    for (int i = 1; i <=N; ++i)
    {
        s.append(A[i]+"+"+to_string(N-i+1));
        if(i==N)
            continue;
        s.append(")");
    }
    return s;
}
int main()
{
    string A[202];
    int N;

    cin>>N;

    generateA(A,N);

    cout<<generateS(A,N)<<endl;

    return 0;
}
 */