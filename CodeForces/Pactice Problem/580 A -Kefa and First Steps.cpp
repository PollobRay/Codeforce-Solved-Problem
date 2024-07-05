//
// Created by Ray on 9/4/2021.
//

/*
#include <stdio.h>

int main()
{
    int prev,prs,n;
    int length=0,maxLength=0;
    prev=0;

    scanf("%d",&n);

    for (int i = 0; i <n ; ++i)
    {
        scanf("%d",&prs);

        if(prs>=prev)
        {
            length++;
            if(maxLength<length)
                maxLength=length;
        }
        else
        {
            length=0;
            if(prs>0)
                length++;
        }
        prev=prs;
        if(maxLength<length)
            maxLength=length;
    }

    printf("%d\n",maxLength);

   return 0;
}*/
