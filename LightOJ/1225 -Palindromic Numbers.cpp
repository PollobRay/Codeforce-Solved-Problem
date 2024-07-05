//
// Created by Ray on 6/1/2022.
//

#include <iostream>
using namespace std;

bool checkPalindrome(string n)
{
    int size=n.size()-1;

    for (int i = 0; i <=size/2 ; ++i)
    {
        if(n[i]!=n[size-i])
            return false;
    }
    return true;
}
/*
int main()
{
    int t;
    int size;
    string n;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;

        cout<<"Case "<<i<<": ";
        if(checkPalindrome(n))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    }


}
 */