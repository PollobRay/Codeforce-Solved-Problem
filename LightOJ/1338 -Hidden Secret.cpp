//
// Created by Ray on 6/1/2022.
//

#include <iostream>
using namespace std;
/*
int main()
{
    string name1,name2;
    char n1[105], n2[105];
    int t;

    cin>>t;
    getchar();
    for (int i = 1; i <=t ; ++i)
    {
        getline(cin,name1);
        getline(cin,name2);
        int len1=0,len2=0;
        for (int j = 0; j <name1.size() ; ++j)
        {
            if(name1[j]!=' ')
            {
                n1[len1++]=name1[j];
            }
        }
        for (int j = 0; j <name2.size() ; ++j)
        {
            if(name2[j]!=' ')
            {
                n2[len2++]=name2[j];
            }
        }
        if(len1==len2)
        {
            int j,k;
            bool found=true;
            for (j = 0; j <len1 ; ++j)
            {
                for ( k = 0; k < len2; ++k)
                {
                    if(n1[j]==n2[k]||n1[j]== tolower(n2[k])||n1[j]== toupper(n2[k]))
                    {
                        n2[k]=' ';
                        break;
                    }
                }
                if(k==len2)
                {
                    cout<<"Case "<<i<<": No"<<endl;
                    found=false;
                    break;
                }
            }
            if(found)
                cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
    }

    return 0;
}
 */