//
// Created by Ray on 6/1/2022.
//

#include<iostream>
#include <vector>
#include <sstream>

using namespace std;
/*
int main()
{
    int t;

    cin>>t;
    getchar();
    for (int i = 1; i <=t ; ++i)
    {
        string inS,cmd[5];
        vector<string> stack;
        int Top=-1;
        vector<string>::iterator it1, it2;
        stack.push_back("http://www.lightoj.com/");
        Top++;
        cout<<"Case "<<i<<": "<<endl;
        while(true)
        {
            getline(cin,inS);
            stringstream ss(inS);
            string word;
            int j=0;
            while (ss >> word) {
                cmd[j++]=word;

            }
            if(j==2)
            {
                if(Top+1<stack.size())
                {
                    it1=stack.begin()+Top+1;
                    it2=stack.end();
                    stack.erase(it1,it2);
                }

                stack.push_back(cmd[1]);
                Top++;
                cout<<stack[Top]<<endl;
            }
            else
            {
                if(cmd[0][0]=='B') //Back
                {
                    if(Top<=0)
                        cout<<"Ignored"<<endl;
                    else
                    {
                        Top--;
                        cout<<stack[Top]<<endl;
                    }
                }
                else if(cmd[0][0]=='F')//Forward
                {
                    if(Top+1>=stack.size())
                    {
                        cout<<"Ignored"<<endl;

                    }
                    else
                    {
                        Top++;
                        cout<<stack[Top]<<endl;
                    }
                }
                else //Quit
                    break;

            }
        }


    }


    return 0;
}
 */