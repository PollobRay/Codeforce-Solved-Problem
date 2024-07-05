//
// Created by Ray on 11/29/2021.
//
//whenever find "WUB" and is it between in the sentence then print space
/*
#include <iostream>
using namespace std;

int main()
{
    char str[250];
    bool isFirstPrint=false,isLastPrint=false;
    cin>>str;

    for (int i = 0; str[i]!='\0'; ++i)
    {
        if (str[i]=='W')//WUB
        {
            if (str[i+1]=='U'&&str[i+2]=='B')
            {
                if (isFirstPrint)
                {
                    isLastPrint=true;
                }
                i=i+2;
                continue;
            }
        }
        if (isLastPrint)
        {
            cout<<" ";
            isLastPrint=false;
        }
        cout<<str[i];
        isFirstPrint=true;
    }
    cout<<"\n";

    return 0;
}*/
