//
// Created by Ray on 4/26/2022.
//

#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*
int main()
{
    int t;
    double r1,r2,r3;
    double a,b,c,s,angleA,angleB,angleC,areaTri,areaS1,areaS2,areaS3,areaShaded;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>r1>>r2>>r3;

        a=r1+r2;
        b=r1+r3;
        c=r2+r3;

        s=(a+b+c)/2.0;

        areaTri= sqrt(s*(s-a)*(s-b)*(s-c));

        angleC= acos((b*b+c*c-a*a)/(2.0*b*c));
        angleB= acos((a*a+c*c-b*b)/(2.0*a*c));
        angleA= acos((b*b+a*a-c*c)/(2.0*b*a));

        areaS1=0.5*angleA*r1*r1;
        areaS2=0.5*angleB*r2*r2;
        areaS3=0.5*angleC*r3*r3;

        areaShaded=areaTri-(areaS1+areaS2+areaS3);

        cout<<"Case "<<i<<": "<<setprecision(10)<<fixed<<areaShaded<<endl;
    }

    return 0;
}
*/