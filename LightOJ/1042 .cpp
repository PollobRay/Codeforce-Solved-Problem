//
// Created by Ray on 6/4/2022.
//
 // 13=1101 where 3 bits is 1, find a number after 13 where number of 1 is also 3 & that is 14(1110)
 // just swap the 'i' bit of value 0 with 'i-1' bit value 1
#include<iostream>
using namespace std;
/*
int main()
{
    unsigned int N;
    bool findFirstOne;
    int T;

    cin>>T;
    for (int c = 1; c<=T ; ++c)
    {
        cin>>N;

        findFirstOne=false;
        for (int i = 0; i <=30 ; ++i)
        {
            if(N&(1<<i)) {
                findFirstOne = true;
            }

            if(findFirstOne)
            {
                if(!(N&(1<<i)))
                {
                    N=N|(1<<i);
                    N=N^(1<<(i-1));
                     //swap previous 0 and 1
                    for (int j = 0; j <=i-2 ; ++j)
                    {
                        if(!(N&(1<<j))) //j th bit is zero
                        {
                            for (int k = j+1; k <=i-2 ; ++k)
                            {
                                if(N&(1<<k)) //when k th bit is 1 where k>j
                                {
                                    //swap
                                    N=N|(1<<j);
                                    N=N^(1<<k);
                                    break;
                                }
                            }
                        }
                    }
                    break;
                }
            }
        }
        cout<<"Case "<<c<<": "<<N<<endl;
    }


    return 0;
}*/