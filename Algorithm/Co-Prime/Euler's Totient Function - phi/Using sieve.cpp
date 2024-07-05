//
// Created by Ray on 6/9/2022.
//
/*
int phi[1000006];
int mark[1000006];

void sievePhi(int n)
{
    for (int i = 1; i <=n ; ++i)
    {
        phi[i]=i;
    }
    mark[1]=1;

    for (int i = 2; i <=n ; ++i)
    {
        if(!mark[i])
        {
            for (int j = i; j <=n ; ++j)
            {
                mark[j]=1;
                phi[j]=phi[j]/i *(i-1);
            }
        }
    }
}
*/