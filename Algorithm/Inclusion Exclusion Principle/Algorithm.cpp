//
// Created by Ray on 6/30/2022.
//

/*
int countDivisor(int arr[],int n,int data)
{
    int totalDivisor=0;
    int divisor;
    int count;
    for (int i = 1; i <=(1<<n)-1 ; ++i)
    {
        divisor=1;
        count=0;
        for (int j = 0; j <=n-1 ; ++j)
        {
            if(i&(1<<j))
            {
                divisor*=arr[j];
                count++;
            }
        }
        divisor=data/divisor;
        if (count&1)
        {
            totalDivisor+=divisor;
        }
        else
        {
            totalDivisor-=divisor;
        }
    }

   return totalDivisor;
}
*/