//
// Created by Ray on 7/12/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{
    int t,n;
    int problem[27];
    int ballons;
    string s;

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>n;
        cin>>s;
        for (int j = 0; j < 26; ++j)
        {
            problem[j]=0;
        }
        ballons=0;
        for (int j = 0; j < n; ++j)
        {
            if(problem[s[j]-'A']==0)
            {
                ballons=ballons+2;
                problem[s[j]-'A']++;
            }
            else
            {
                ballons++;
                problem[s[j]-'A']++;
            }
        }
        cout<<ballons<<endl;
    }

    return 0;
}
*/