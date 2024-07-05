//
// Created by Ray on 7/20/2022.
//
// AC bruteforce,
#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// brouteforce O(n^2)
/*
int makeSet(vector<int> &v)
{
    long long sum=0;
    int max=-1;
    int each=0;
    int totalS=0;

    for (int i = 0; i <v.size() ; ++i)
    {
         sum+=v[i];
         if(max<v[i])
             max=v[i];
    }

    for (int i = v.size(); i>=1  ; i--)
    {
        // i size block size
        int number=sum/i; // number value in each block
       if(sum%i==0&& number>=max)
        {
            int s=0; //store block size

            for (int j = 0; j <v.size() ; ++j)
            {
                s+=v[j];
                if(v[j]!=number)
                {
                    totalS++;
                }
                if(s==number)
                {
                    if(v[j]!=number)
                        totalS--;
                    each=i;
                    s=0;
                }
                if(s>number)
                {
                    totalS=0;
                    each=0;
                    break;
                }
            }
        }
        if (each)
            break;
    }
    return totalS;
}

int main()
{
    int t,n;
    int val;
    vector<int> data;
    cin>>t;
    for (int i = 1; i <=t ; ++i)
    {
        cin>>n;

        for (int j = 1; j <=n ; ++j)
        {
            cin>>val;
            data.push_back(val);

        }
        cout<<makeSet(data)<<endl;
        data.clear();
    }


    return 0;
}
*/


// Backtracking
// getting TLE
/*
bool flag=false;

void makeSet(int in,vector<int> &v,int &op)
{
    unordered_set<int> s(v.begin(),v.end());
    if(s.size()==1)
    {
        //cout<<"Found"<<endl;
        flag=true;
        return;
    }
    if (flag)
        return;
    if(in<v.size()&&!flag)
    {
        makeSet(in+1,v,op);//pass as it is
        //operation--;
        if (flag)
            return;
        //Add to previous
        if(in>=1 && !flag)
        {
            int val=v[in];
            v[in-1]+=val;
            v.erase(v.begin()+in);
            // operation--;
            op++;
            makeSet(in,v,op);


            if (flag)
                return;
            v.insert(v.begin()+in,val);
            v[in-1]-=val;
            op--;
        }
        if(in+1<v.size()&& !flag)
        {
            int val=v[in];
            v[in+1]+=val;
            v.erase(v.begin()+in);
            op++;
            makeSet(in+1,v,op);
            if (flag)
                return;
            v.insert(v.begin()+in,val);
            v[in+1]-=val;
            op--;
        }

    }

}


int main()
{
    int t,n;
    int val;
    vector<int> data;
    cin>>t;

    for (int i = 1; i <=t ; ++i)
    {
        int op=0;
        flag=false;

        cin>>n;

        for (int j = 1; j <=n ; ++j)
        {
            cin>>val;
            data.push_back(val);

        }
        makeSet(0,data,op);
        cout<<op<<endl;

        data.clear();
    }


    return 0;
}
*/
