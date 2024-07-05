//
// Created by Ray on 6/17/2022.
//
// 1 indexed
/*
#include <stdio.h>

int main()
{
    int N,Q;
    int i,price;
    int A[100010];
    int hash[200010]={0}; //beacause price-A[i] <=2*10^5
    int wants;
    int no;

    scanf("%d",&N);

    for (int j = 1; j <=N ; ++j)
    {
        scanf("%d",&A[j]);
        hash[A[j]]++;
    }


    scanf("%d",&Q);

    for (int j = 1; j <=Q ; ++j)
    {
        scanf("%d %d",&i,&price);


        if(A[i]==price) // when have enaugh money
            printf("0\n");
        else
        {
            if(A[i]>price) //when have greater money
            {
                if(hash[price]==0) //when other also have enaough money
                {
                    printf("-1\n");
                }
                else // when others have
                {
                    printf("%d\n",hash[price]);
                }
            }
            else // when have less money
            {
                wants=price-A[i];

                if(price>100000)
                    no=0;
                else
                    no=hash[price];

                if(A[i]==wants) // when same amount of money required
                {
                   if(hash[wants]!=1) // if not he has required money //getting run time error when hash[10^5]
                   {
                       no+=hash[wants]-1;
                   }
                }
                else
                    no+=hash[wants];

                if(no==0)
                    printf("-1\n");
                else
                    printf("%d\n",no);
            }
        }

    }

    return 0;
}
*/