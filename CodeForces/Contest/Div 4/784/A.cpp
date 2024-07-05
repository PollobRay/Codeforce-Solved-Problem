/*
//
// Created by Ray on 4/21/2022.
//

#include<iostream>
using namespace std;

int main()
{
    int rating,t;
    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>rating;
        if(rating<=1399)
        {
            cout<<"Division 4\n";
        }
        else if(1400<=rating &&rating <=1599)
        {
            cout<<"Division 3\n";
        }
        else if(1600<=rating && rating<=1899)
        {
            cout<<"Division 2\n";
        }
        else
        {
            cout<<"Division 1\n";
        }

    }

    return 0;
}*/
