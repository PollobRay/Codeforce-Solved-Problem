//
// Created by Ray on 6/16/2022.
//

// sum of three digits with trailing digit 3
/*
#include <iostream>
using namespace std;

int main()
{
    int t,n;
    int d;
    int arr[12];
    bool isFound;

    cin>>t;
    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;
        for (int j = 0; j <=9 ; ++j)
        {
            arr[j]=0;
        }
        for (int j = 1; j <=n ; ++j)
        {
            cin>>d;
            arr[d%10]++;
        }
        isFound=false;

        for (int j = 0; j <=9; ++j)
        {
            for (int k = 0; k <=9 ; ++k)
            {
                for (int l = 0; l <=9 ; ++l)
                {
                    if(j==k&&j==l&&arr[j]<3)
                        continue;
                    if((j==k||j==l)&&arr[j]<2)
                        continue;
                    if((j==k||k==l)&&arr[k]<2)
                        continue;
                    if((j==l||k==l)&&arr[l]<2)
                        continue;

                   if(arr[j]!=0&&arr[k]!=0&&arr[l]!=0&&(j+k+l)%10==3)
                     {
                       isFound=true;
                       break;
                     }
                }
                if (isFound)
                    break;
            }
            if (isFound)
                break;
        }


       if(isFound)
           cout<<"YES"<<endl;
       else
           cout<<"NO"<<endl;
    }

    return 0;
}*/