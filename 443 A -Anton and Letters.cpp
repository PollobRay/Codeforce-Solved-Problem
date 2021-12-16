//
// Created by Ray on 12/5/2021.
//
//
/*
#include <iostream>
using namespace std;

int main()
{
    char str[1020];
    int letter[28]={0};
    char c;
    int count=0;

    //cin>>str;
    cin.getline(str,1000,'\n');

    for (int i = 1; str[i]!='\0'; ++i)
    {
        c=str[i];

        if (c==','||c==' '||c=='}')
            continue;

        //cout<<c<<"  "<<c-'a'<<endl;

        letter[c-'a']++;
    }

    for (int i = 0; i<26; ++i)
    {
        if (letter[i]!=0)
            count++;
    }

    cout<<count<<endl;

    return 0;
}*/
