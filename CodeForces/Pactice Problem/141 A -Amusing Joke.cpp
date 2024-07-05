//
// Created by Ray on 12/7/2021.
//
// if first and second string's all character is found on third string and third string does not have extra character then print yes otherwise no

/*
#include<iostream>
using namespace std;

int main()
{
    char host[102];
    char guest[102];
    char hostGuest[105];
    int hostL=0,guestL=0,hostGuestL=0;
    int length1=0,length2=0;
    int temp1=0,temp2=0;

    cin>>host;
    cin>>guest;
    cin>>hostGuest;

    for (int i = 0; hostGuest[i]!='\0'; ++i)
    {
        if(host[hostL]=='\0')
        {
            break;
        }

        for (int j = 0; host[j]!='\0'; ++j)
        {
            temp1++;
            if (host[j]=='.')
                continue;

            if(hostGuest[i]==host[j])
            {
                hostGuest[i]='.';
                host[j]='.';
                hostL++;
                break;
            }
        }
        if (length1<temp1)
            length1=temp1;
        temp1=0;
    }

    for (int i = 0; hostGuest[i]!='\0'; ++i)
    {
        hostGuestL++;

        if (hostGuest[i]=='.')
            continue;

        if(guest[guestL]=='\0')
        {
            break;
        }

        for (int j = 0; guest[j]!='\0'; ++j)
        {
            temp2++;
            if (guest[j]=='.')
                continue;

            if(hostGuest[i]==guest[j])
            {
                hostGuest[i]='.';
                guest[j]='.';
                guestL++;
                break;
            }
        }
        if (length2<temp2)
            length2=temp2;
        temp2=0;
    }

    if(length1==hostL&&length2==guestL&&hostL+guestL==hostGuestL)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
*/
