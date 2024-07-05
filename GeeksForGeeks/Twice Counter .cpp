//
// Created by Ray on 7/5/2022.
//
/*
#include<iostream>
#include<map>
using namespace std;

int countWords(string list[], int n)
{
    map<string,int> values;
    int count=0;
    for (int i = 0; i <n ; ++i)
    {
        values[list[i]]=values[list[i]]+1;

    }
    for (auto s:values)
    {
        if(s.second==2)
            count++;
    }
    return count;
}

int main()
{
    string ar[]={"Geeks", "For", "Geeks"};
    cout<<countWords(ar,3);
    return 0;
}*/