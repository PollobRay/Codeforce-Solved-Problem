//
// Created by Ray on 8/27/2022.
//
// AC
/*
#include <iostream>
using namespace std;

int main()
{

    int t;
    int n,m,x1,y1,d;
    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>n>>m>>x1>>y1>>d;

       if((x1-d<=1&&x1+d>=n)||(y1-d<=1&&y1+d>=m)||(x1-d<=1&&y1-d<=1)||(x1+d>=n&&y1+d>=m)||(abs(x1-n)+ abs(y1-m)<=d))
       {//vertical leaser line || horizontal line || square (1,1) to (x1,y1) ||square (x1,y1) to (n,m) || leaser at finish point
           cout<<-1<<endl;
       }
       else
       {
            cout<<(n-1)+(m-1)<<endl;
       }
    }



    return 0;
}
*/