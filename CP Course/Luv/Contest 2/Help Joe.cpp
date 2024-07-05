//
// Created by Ray on 6/17/2022.
//
// palindrome character may be repeated so it better to store it in array then process

/*
#include<iostream>
using namespace std;
int main()
{
    string str;
    int alphabet[28]={0};
    int ch[28]={0};
    int q;
    int n;
    char c;
    int odd;
    int length;


    cin>>str;

    for (int i = 0; i <str.length() ; ++i)
    {
        alphabet[str[i]-'a']++;
    }

    cin>>q;

    for (int i = 1; i <=q ; ++i)
    {
        cin>>n;
        length=0;
        odd=0;
        for(int j=0;j<26;j++)
        {
            ch[j]=0;
        }
        for (int j = 1; j <=n ; ++j)
        {
            cin>>c;
            ch[c-'a']=1;
        }
        for (int j = 0; j <26 ; ++j)
        {
            if(ch[j])
            {
                length+=alphabet[j];
                if (alphabet[j]%2==1)
                {
                    odd++;
                    length--;
                }
            }

        }
        if(odd>0)
            length++;
        cout<<length<<endl;
    }


    return  0;
}
*/