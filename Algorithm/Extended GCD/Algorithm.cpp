//
// Created by Ray on 6/10/2022.
//

// ax + by = gcd(a,b)
/*
int egcd(int a,int b,int &x,int &y) //here we get B from x and Q from y
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1, y1;
    int d=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}
*/