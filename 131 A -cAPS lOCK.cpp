//
// Created by Ray on 11/26/2021.
//
// if first character is small make capital and other's make small

//if all All character capital or just first character small and other are capital then just reverse
// if there are any small character between the word then just show the word

/*
#include <iostream>
using namespace std;

int main()
{
    char str[105];
    bool isFirstSml=false,isMidCap=false,isMidSml=false;

    cin>>str;

    if (islower(str[0]))
        isFirstSml=true;
    for (int i = 1; str[i]!='\0'; ++i)
    {
        if (islower(str[i]))
            isMidSml=true;
        else
            isMidCap=true;
    }
    for (int i = 0; str[i]!='\0'; ++i)
    {
        if (isMidSml)
            cout<<str[i];
        //else if(i==0&&isFirstSml&&isMidCap)
            //cout<<(char) toupper(str[i]);
        else if (!isFirstSml&&isMidCap)
            cout<<(char) tolower(str[i]);
       else if (i==0&&isFirstSml&&!isMidSml)
          cout<<(char) toupper(str[i]);
        else
            cout<<(char) tolower(str[i]);
    }


    cout<<endl;

    return 0;
}*/
