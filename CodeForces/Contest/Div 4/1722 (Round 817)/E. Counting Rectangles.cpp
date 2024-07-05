//
// Created by Ray on 9/1/2022.
//
// Ac
/*
#include<iostream>
using namespace std;

int rectanges[1001][1001];

long long answers[1001][1001];

void setsRec()
{
    for (int i = 0; i <1001 ; ++i)
    {
        for (int j = 0; j < 1001; ++j) 
        {
            rectanges[i][j]=0;    
        }    
        answers[i][0]=0; //sets 0 columns
        answers[0][i]=0;//sets 0 row
    }
}

void calc()
{
    for (int i = 1; i <1001 ; ++i)
    {
        for (int j = 1; j < 1001; ++j)
        {
            if(rectanges[i][j])
                answers[i][j]=1LL*rectanges[i][j]*i*j;
            else
                answers[i][j]=0;

            answers[i][j]+=answers[i-1][j];
            answers[i][j]-=answers[i-1][j-1];
            answers[i][j]+=answers[i][j-1];
        }
    }
}
int main()
{

    int t,n,q;
    int hi,wi;
    int hs,ws,hb,wb;

    cin>>t;

    for (int i = 0; i <t ; ++i)//10^2
    {
        cin>>n>>q;

        setsRec(); //10^6

        //getting rectangle input
        for (int j = 1; j <=n ; ++j)
        {
            cin>>hi>>wi;
            rectanges[hi][wi]+=1;
        }

        calc(); //10^6

        //queries
        for (int j = 0; j <q ; ++j)
        {
            cin>>hs>>ws>>hb>>wb;
            hs++; //making lower boundary higher one point
            ws++;
            hb--;// making upper boundary lower one point
            wb--;
            // so in calculation every rectangle fit into this
            cout<<answers[hb][wb]-answers[hs-1][wb]-answers[hb][ws-1]+answers[hs-1][ws-1]<<endl;
        }

    }


    return 0;
}
 */