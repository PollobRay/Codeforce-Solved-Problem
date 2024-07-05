//
// Created by Ray on 8/30/2022.
//
/*
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    int n;

    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        cin>>n;
        map<string,int> p1;
        map<string,int> p2;
        map<string,int> p3;
        int point1=0;
        int point2=0;
        int point3=0;
        string s;
        for (int j = 0; j < n; ++j)
        {
            cin>>s;
            p1[s]=1;
        }
        for (int j = 0; j < n; ++j)
        {
            cin>>s;
            p2[s]=1;
        }
        for (int j = 0; j < n; ++j)
        {
            cin>>s;
            p3[s]=1;
        }
        for (pair<string,int> str:p1 )
        {
            if(p1[str.first]==0)
                continue;
            if(p2[str.first]==1&&p3[str.first]==1)
            {
                p2[str.first]=0;
                p3[str.first]=0;

            }
            else if(p2[str.first]==1)
            {
                p2[str.first]=0;
                point1++;
                point2++;
            }
            else if(p3[str.first]==1)
            {
                p3[str.first]=0;
                point1++;
                point3++;
            }
            else
                point1+=3;
        }
        for (pair<string,int> str:p2 )
        {
            if(p2[str.first]==0)
                continue;
            if(p1[str.first]==1&&p3[str.first]==1)
            {
                p1[str.first]=0;
                p3[str.first]=0;

            }
            else if(p1[str.first]==1)
            {
                p1[str.first]=0;
                point1++;
                point2++;
            }
            else if(p3[str.first]==1)
            {
                p3[str.first]=0;
                point2++;
                point3++;
            }
            else
                point2+=3;
        }
        for (pair<string,int> str:p3 )
        {
            if(p3[str.first]==0)
                continue;
            if(p2[str.first]==1&&p1[str.first]==1)
            {
                p2[str.first]=0;
                p1[str.first]=0;

            }
            else if(p2[str.first]==1)
            {
                p2[str.first]=0;
                point3++;
                point2++;
            }
            else if(p1[str.first]==1)
            {
                p1[str.first]=0;
                point1++;
                point3++;
            }
            else
                point3+=3;
        }
        cout<<point1<<" "<<point2<<" "<<point3<<endl;

    }



    return 0;
}
*/
