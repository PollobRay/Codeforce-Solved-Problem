//
// Created by Ray on 7/5/2022.
//
/*
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s)
{
    stack<char> openingBrackets;
    for (int i = 0; i <s.size() ; ++i)
    {
        if(s.at(i)=='('||s.at(i)=='{'||s.at(i)=='[')
            openingBrackets.push(s.at(i));
        else
        {
            if (openingBrackets.empty())
            {
                return false;
            }
            if((s.at(i)==')'&& (char)(s.at(i)-1)!=openingBrackets.top()))
            {
                return false;
            }
            else if((s.at(i)=='}'||s.at(i)==']')&&((char)(s.at(i)-2)!=openingBrackets.top()))
            {
                return false;
            }
            openingBrackets.pop();
        }
    }
    if (openingBrackets.empty())
        return true;
    return false;
}
int main()
{
    int n;
    string s;


    cin>>n;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>s;
        if(isValid(s))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}
 */