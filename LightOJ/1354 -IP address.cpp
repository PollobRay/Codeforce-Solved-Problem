//
// Created by Ray on 6/2/2022.
//

#include<iostream>
#include <cstring>
using namespace std;
/*
int main()
{
    int t;
    int a,b,c,d,result;
    string ip,ip1,ip2,ip3,ip4;
    int sht;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>a;
        getchar();
        cin>>b;
        getchar();
        cin>>c;
        getchar();
        cin>>d;
        getchar();

        cin>>ip;
        ip1=ip.substr(0,8);
        ip2=ip.substr(9,8);
        ip3=ip.substr(18,8);
        ip4=ip.substr(27,8);

        //check
        result=0;
        sht=1;
        for (int j = 7; j >=0 ; j--)
        {

            result+=(ip1[j]-'0')*sht;
            sht=sht<<1;
        }
        if(result!=a)
        {
            cout<<"Case "<<i<<": No"<<endl;
            continue;
        }
        result=0;
        sht=1;
        for (int j = 7; j >=0 ; j--)
        {

            result+=(ip2[j]-'0')*sht;
            sht=sht<<1;
        }
        if(result!=b)
        {
            cout<<"Case "<<i<<": No"<<endl;
            continue;
        }
        result=0;
        sht=1;
        for (int j = 7; j >=0 ; j--)
        {

            result+=(ip3[j]-'0')*sht;
            sht=sht<<1;
        }
        if(result!=c)
        {
            cout<<"Case "<<i<<": No"<<endl;
            continue;
        }
        result=0;
        sht=1;
        for (int j = 7; j >=0 ; j--)
        {

            result+=(ip4[j]-'0')*sht;
            sht=sht<<1;
        }
        if(result!=d)
        {
            cout<<"Case "<<i<<": No"<<endl;
            continue;
        }
        cout<<"Case "<<i<<": Yes"<<endl;

    }

    return 0;
}*/