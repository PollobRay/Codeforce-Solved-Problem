//
// Created by Ray on 8/30/2022.
//
//AC
/*

#include <iostream>
#include<deque>
using namespace std;

int main()
{
    int t;
    int n;
    char linePerson;
    long long ans;
    deque<int> left;
    deque<int> right;
    int leftEnd,rightStart;


    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        cin>>n;
        if(n&1)
        {
            leftEnd=(n/2)-1;
            rightStart=(n/2)+1;
        }
        else
        {
            leftEnd=(n/2)-1;
            rightStart=n/2;
        }
        ans=0;
        for (int j = 0; j < n; ++j)
        {
            cin>>linePerson;

            if(linePerson=='L')
                ans+=j;
            else
                ans+=n-1-j;

            if(j<=leftEnd && linePerson=='L')
            {
                left.push_back(j);
            }
            else if(j>=rightStart && linePerson=='R')
            {
               right.push_back(j);
            }
        }
        for (int k = 1; k <=n; ++k)
        {
            if(!(left.empty() || right.empty()))
            {
                if(left.front()>n-1-right.back()) //right
                {
                    ans=ans-(n-1-right.back()); //sub previous
                    ans=ans+right.back(); //when look left
                    right.pop_back();
                }
                else //left
                {
                   ans=ans-left.front();
                   ans=ans+(n-1-left.front());
                   left.pop_front();
                }
            }
            else if(!left.empty())
            {
                ans=ans-left.front();
                ans=ans+(n-1-left.front());
                left.pop_front();
            }
            else if(!right.empty())
            {
                ans=ans-(n-1-right.back()); //sub previous
                ans=ans+right.back(); //when look left
                right.pop_back();
            }
            //else when both empty

            cout<<ans<<" ";
        }

        cout<<endl;


    }

    return 0;
}
*/