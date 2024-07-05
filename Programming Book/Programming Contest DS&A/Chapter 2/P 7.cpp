//
// Created by Ray on 4/27/2022.
//

#include <iostream>
#include<sstream>
#include<string>
using namespace std;

void Method1() //using stream
{
    char line[100];
    string s;
    gets(line);

    istringstream is(line);

    while(is>>s)
    {
        cout<<s<<endl;
    }
}
void Method2() //developed
{
    char line[100];

    gets(line);

    int point=0;

    while(line[point]!='\0')
    {
        while(line[point]!=' '&& line[point]!='\0')
        {
            cout<<line[point];
            point++;
            if(line[point]==' '|| line[point]=='\0')
            {
                cout<<endl;
                break;
            }
        }
        if(line[point]!='\0')
            point++;
    }
}
/*
int main()
{
    Method2();


    return 0;
}
 */