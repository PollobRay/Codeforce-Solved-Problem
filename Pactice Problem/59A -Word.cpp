//
// Created by pollo on 4/27/2021.
//

/*
#include <iostream>
using namespace std;

int main()
{
    char word[102],wordUpper[102],wordLower[102];
    int len=0,noOfUpper=0;

    cin>>word;

    for (int i = 0; word[i]!='\0'; ++i)
    {
        if (word[i]>='A'&&word[i]<='Z')
        {
            noOfUpper++;
            wordLower[i]=(word[i]+32);
            wordUpper[i]=word[i];
        }
        else
        {
            wordUpper[i]=(word[i]-32);
            wordLower[i]=word[i];
        }
        len++;
    }
    wordLower[len]=wordUpper[len]='\0';

    if ((len-noOfUpper)>=noOfUpper)
        cout<<wordLower<<endl;
    else
        cout<<wordUpper<<endl;

    return 0;
}*/
