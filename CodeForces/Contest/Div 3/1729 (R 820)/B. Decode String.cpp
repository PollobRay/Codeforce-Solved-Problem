//
// Created by Ray on 9/12/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    int strn;
    string n;

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>strn;
        cin>>n;
        string s;
        int charNum=0;

        for (int j = n.size()-1; j >=0 ; j--)
        {
             charNum=0;

             if(n.at(j)=='0' &&j-2>=0) //two digits
             {
                 charNum=(int)(n.at(j-2)-'0');
                 charNum*=10;
                 charNum+=(int)(n.at(j-1)-'0');
                 j=j-2;
             }
             else //signle digits
             {
                 charNum+=(int)(n.at(j)-'0');
             }
             s.push_back((char)('a'+charNum-1));
        }
        for (int j = s.size()-1; j >=0 ; j--)
        {
            cout<<s.at(j);
        }
        cout<<endl;
    }


    return 0;
}
*/