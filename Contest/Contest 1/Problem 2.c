//
// Created by pollo on 3/16/2021.
//
/*
#include<stdio.h>
#include <ctype.h>

int compareChar(char c1,char c2)
{
   if(isupper(c1))
       c1+=32;
   if(isupper(c2))
       c2+=32;

   if(c1==c2)
       return 0;
   else if(c1<c2)
       return -1;
   else
       return 1;

}
int main()
{
    char first[101],second[101];
    int i,returnValue;

    scanf("%s",first);
    scanf("%s",second);

    for(i=0;first[i]!='\0'&&second[i]!='\0';i++)
    {
        returnValue=compareChar(first[i],second[i]);
        if(returnValue!=0)
        {
            printf("%d\n",returnValue);
            break;
        }
    }

   if(returnValue==0)
     printf("%d\n",0);

    return 0;
}
*/