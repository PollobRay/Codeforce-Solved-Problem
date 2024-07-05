//
// Created by Ray on 7/24/2022.
//
// Problem id 102892
// AC

/*
#include <iostream>
using namespace std;

int main()
{

    int count,aCount;
    bool foundA;
    string str;
    int n;

    cin>>n;
    cin>>str;
    count=0;
    aCount=0;
    foundA=false;

    for (int i = 0; i <n ; ++i)
    {
        if(str[i]!='a'&&str[i]!='b')
            count++;
        else if(str[i]=='b')
        {
            if(foundA)
            {
                aCount+=count;
                foundA=false;
            }
            count=0;
        }
        else // a
        {
            aCount+=count+1; // 1 is for a
            count=0;
            foundA=true;
        }
    }
    if (foundA)
    {
        aCount+=count;
    }

    cout<<aCount<<endl;

    return 0;
}
*/