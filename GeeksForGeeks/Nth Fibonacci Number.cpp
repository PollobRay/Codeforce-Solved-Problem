//
// Created by Ray on 7/5/2022.
//
/*
class Solution {
    int fibo[1005]={0,1};
public:
    long long int nthFibonacci(long long int n){
        if(n==0||n==1)
            return fibo[n];
        else if(fibo[n]!=0)
            return fibo[n];

        return fibo[n]=(nthFibonacci(n-1)+nthFibonacci(n-2))%1000000007;
    }
};
*/