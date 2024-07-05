//
// Created by Ray on 12/20/2021.
//
// if s[i]'th<a[i]'th take two digit of s
/*
#include <iostream>
#include <cstring>
using namespace std;

int getB(char s[],char a[])
{
    int slen,alen;
    int bs;
    int sn;
    int bi=0;
    int b[20];
    slen= strlen(s)-1;
    alen= strlen(a);

    for (int i = alen-1; i >=0 ; i--)
    {
        if(slen==-1)
        {
            return -1;
        }

        if(s[slen]<a[i])
        {
            if(slen<=0)
                return -1;
            sn=(s[slen-1]-'0')*10+(s[slen]-'0');

           //cout<<"Condition "<<i+1<<" "<<slen<<" "<<sn<<endl;
            slen=slen-2;
        }
        else
        {
            sn=s[slen]-'0';
            slen--;
        }

        //cout<<"s: "<<sn<<"  a: "<<a[i]-'0'<<endl;
        bs=sn-a[i]+'0';

      // cout<<"Bs: "<<bs<<endl;
        if(bs>9)
            return -1;

       b[bi++]=bs;
      // cout<<b[bi-1]<<endl;
    }
    for (int i = bi-1; i>=0; i--)
    {
        if(b[i]==0&&i==bi-1)
            continue;

        cout<<b[i];
    }
    cout<<endl;

    return 1;
}
int main()
{
    int t;
    char s[20],a[20];


    cin>>t;
    fflush(stdin);
    for (int i = 0; i < t; ++i)
    {
        cin>>s;
        fflush(stdin);
        cin>>a;
        fflush(stdin);

        if(getB(s,a)==-1)
        {
          cout<<-1<<endl;
        }


    }


    return 0;
}
*/