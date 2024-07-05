//
// Created by Ray on 12/20/2021.
//

/*
#include<iostream>
#include <cstring>
using namespace std;

bool isSquare(char str[])
{
    int len=strlen(str);
    int half=len/2;
    bool isTrue=false;

    if(len&1)
        return false;

    for (int i = 0; i < half; ++i)
    {
        if(str[i]==str[i+half])
            isTrue=true;
        else
        {
            isTrue=false;
            break;
        }
    }
    
    return isTrue;
    
}
int main()
{
    int t;
    char str[102];
    
    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>str;

        if(isSquare(str))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}*/
