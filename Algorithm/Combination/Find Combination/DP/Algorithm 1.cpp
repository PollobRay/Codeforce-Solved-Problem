//
// Created by Ray on 6/11/2022.
//

/*

long ncr[10005][10005];
void combination(int n)
{
    ncr[0][0]=1;

    for (int i = 1; i <=n ; ++i)
    {
        for (int j = 0; j <=n ; ++j)
        {
            if(j>i)
                ncr[i][j]=0;
            else if(j==i||j==0)
                ncr[i][j]=1;
            else
                ncr[i][j]=ncr[i-1][j]+ncr[i-1][j-1];
        }
    }
}

*/