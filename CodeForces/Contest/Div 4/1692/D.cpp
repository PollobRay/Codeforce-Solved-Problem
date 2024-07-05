//
// Created by Ray on 6/16/2022.
//

#include<iostream>
using namespace std;
/*
int main()
{
    int t;
    int HH,MM,x;
    char c;
    int totalRevolvation;
    int palindrome;
    int preH,preM;

    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        cin>>HH>>c>>MM>>x;
        totalRevolvation=1440;
        palindrome=0;
        preH=HH;
        preM=MM;

        for (int j = 1; j<=totalRevolvation ; ++j)
        {
            if(j!=1&&(preH==HH&&preM==MM))
                break;
            if((HH/10==MM%10)&&(HH%10==MM/10))
                palindrome++;

            int d=(MM+x)/60;
            MM=(MM+x)%60;
            HH=(HH+d)%24;
        }

        cout<<palindrome<<endl;
    }

    return 0;
}*/