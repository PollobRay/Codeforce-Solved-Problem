//
// Created by Ray on 6/2/2022.
//

#include <iostream>
using namespace std;
/*
int main()
{
    string month1,month2;
    int t;
    int day1,day2;
    long year1,year2;
    int leapDay;
    long start,end;

    cin>>t;
    for (int i = 1; i <=t ; ++i)
    {
        cin>>month1>>day1;
        getchar();
        cin>>year1;
        getchar();
        cin>>month2>>day2;
        getchar();
        cin>>year2;

        if(month1.compare("January")&&month1.compare("February"))
        {
            year1++;
        }

        start=year1;
        if(!month2.compare("January")||(!month2.compare("February")&&(day2<29)))
        {
            year2--;

        }
        end=year2;
        leapDay=0;
        int div4=end/4-(start-1)/4;
        int div100=end/100-(start-1)/100;
        int div400=end/400-(start-1)/400;
        leapDay=div4+div400-div100;

        cout<<"Case "<<i<<": "<<leapDay<<endl;

    }


    return 0;
}*/