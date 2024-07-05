//
// Created by Ray on 6/11/2022.
//

/*

long ncr(int n,int r)
{
    long nr=n-r;
    long nF[n];
    long rF[r];
    long nrF[nr];
    long result=1;

    for (int i = 1; i <=n; ++i)
    {
        nF[i]=i;
        if(i<=r)
            rF[i]=i;
        if(i<=nr)
            nrF[i]=i;
    }

    //Divide
    for (int i = 2; i <=r ; ++i)
    {
        for (int j = 2; j <=n ; ++j)
        {
            if(nF[j]==1||rF[i]==1)
                continue;
            if(nF[j]%rF[i]==0)
            {
                nF[j]=nF[j]/rF[i];
                rF[i]=1;
            }
        }
    }
    for (int i = 2; i <=nr ; ++i)
    {
        for (int j = 2; j <=n ; ++j)
        {
            if(nF[j]==1||nrF[i]==1)
                continue;
            if(nF[j]%nrF[i]==0)
            {
                nF[j]=nF[j]/nrF[i];
                nrF[i]=1;
            }
        }
    }

    //calculating result
    for (int i = 2; i <=n ; ++i)
    {
        result*=nF[i];
    }

    return result;
}

*/