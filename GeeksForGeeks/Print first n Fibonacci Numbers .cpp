//
// Created by Ray on 7/5/2022.
//
/*
class Solution
{
public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n)
    {
        vector<long long> fiboValues(n);
        fiboValues[0]=1;
        if(n>=2)
        {
            fiboValues[1]=1;
            for(int i=2;i<n;i++)
            {
                fiboValues[i]=fiboValues[i-1]+fiboValues[i-2];
            }
        }

        return fiboValues;
    }
};
*/