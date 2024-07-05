//
// Created by Ray on 7/10/2022.
//
/*
#include<iostream>
#include <vector>
using namespace std;

vector<string> parenthesesList;
void parenthesis(string &s,int o,int c,int n)
{
    if(o<n)
    {
        s.push_back('(');
        parenthesis(s,o+1,c,n);
        s.pop_back(); //backtracking
    }
    if(o>c)
    {
        s.push_back(')');
        parenthesis(s,o,c+1,n);
        s.pop_back();
    }
    if(o==c&&o==n)
    {
        //cout<<s<<endl;
        parenthesesList.push_back(s);
    }
}
vector<string> generateParenthesis(int n)
{
    string s;
    parenthesis(s,0,0,n);
    return parenthesesList;
}
int main()
{

   for(string s: generateParenthesis(3))
       cout<<s<<endl;

    return 0;
}
*/