//
// Created by Ray on 8/19/2022.
//
// Ac
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,n;

    cin>>t;

    for (int caset = 1; caset <=t ; ++caset)
    {
        cin>>n;

        vector<int> A(n);

        long long result=0;
        int mod=1000000007;

        for (int ind = 0; ind < n; ++ind)
        {
           cin>>A[ind];
        }

        for (int j = 1; j <A.size()-1 ; ++j)
        {
            int Ai_number=0;
            int Ak_number=0;

            for (int i = 0; i <j ; ++i)
            {
                if(A[i]<=A[j])
                {

                    Ai_number++;
                }
            }

            for (int k = j+1; k <A.size() ; ++k)
            {
                if(A[j]<A[k])
                {
                    Ak_number++;
                }
            }
            result=(result+((Ai_number*Ak_number)%mod))%mod;
        }
        cout<<result<<endl;
    }



    return 0;
}
*/