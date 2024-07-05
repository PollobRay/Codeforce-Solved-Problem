//
// Created by Ray on 6/12/2022.
//

//  n integer value is given, we have to find multiplication of these number and if L.S.B of the Quotient 2,3,5 print
// print Yes otherwise print No
/*
#include <stdio.h>

int main()
{
    int t;
    int n;
    int v,i,j;
    int result;

    scanf("%d",&t);

    for (i = 1; i <=t ; ++i)
    {
        scanf("%d",&n);
        result=1;
        for (j = 1; j <=n ; ++j)
        {
            scanf("%d",&v);
           result =(result *v%10)%10;
        }
        if(result==2||result==3||result==5)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
*/