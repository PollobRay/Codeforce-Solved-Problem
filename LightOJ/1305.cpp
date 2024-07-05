//
// Created by Ray on 4/26/2022.
//

#include<iostream>
using namespace std;
/*
int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy;
    //double b,h,m;
    long area;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;

        // solution 1
        //b=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        //m=((by-ay)*1.0)/(bx-ax); //have divide zero exception
        //h=(dy-m*dx+m*bx-by)/sqrt(1+m*m);
        //area=b*h;

        //solution 2
        area=(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)))/2;
        if(area<0)
            area*=-1;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;

    }

    return 0;
}
*/