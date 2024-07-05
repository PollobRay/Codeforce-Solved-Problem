//
// Created by pollo on 5/26/2021.
//

#include <iostream>

using namespace std;
/*
int main()
{
    int t,n;
    int xb,xs,yb,ys,zb,zs;
    int x1,y1,z1,x2,y2,z2;
    int length,width,height,volume;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;

        xb=yb=zb=10005;
        xs=ys=zs=0;

        for (int j = 0; j <n ; ++j)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            if (xs<x1)
                xs=x1;
            if (xb>x2)
                xb=x2;
            if (ys<y1)
                ys=y1;
            if (yb>y2)
                yb=y2;
            if (zs<z1)
                zs=z1;
            if (zb>z2)
                zb=z2;
        }
        length=xb-xs;
        height=yb-ys;
        width=zb-zs;

        if (length>0&&height>0&&width>0)
            volume=length*height*width;
        else
            volume=0;

        cout<<"Case "<<i<<": "<<volume<<endl;
    }

    return 0;
}*/