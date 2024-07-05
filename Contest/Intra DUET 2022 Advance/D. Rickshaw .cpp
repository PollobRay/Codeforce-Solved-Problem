//
// Created by Ray on 8/16/2022.
//
// AC
/*
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int N,W;
    int wi;
    map<int,int> weight;
    vector<int> people;
    int needRickshaw=0;

    cin>>N>>W;

    for (int i = 0; i <N ; ++i)
    {
        cin>>wi;
        if(wi==W)
        {
            needRickshaw++;
        }
        else if(weight[W-wi])
        {
            needRickshaw++;
            weight[W-wi]--;
        }
        else
        {
            weight[wi]++;
        }
    }
    //cout<<needRickshaw<<endl;

    for (pair<int,int>wp:weight)
    {
        if(!people.empty())
        {
            if(people[0]+wp.first>W) //required one person per rickshaw
            {
                for (int i = 1; i <=wp.second ; ++i)//till number of person
                {
                    needRickshaw++;
                }
            }
            else
            {
                for (int i = 1; i <=wp.second ; ++i)//till number of person
                {
                    people.push_back(wp.first);//push weight
                }
            }
        }
        else
        {
            for (int i = 1; i <=wp.second ; ++i)//till number of person
            {
                people.push_back(wp.first);//push weight
            }
        }
    }
    for (int start = 0,end=people.size()-1;  end>=start ; end--)
    {
        if(end==start)
        {
            needRickshaw++;
            break;
        }
        else if(people[end]+people[start]<W)
        {
            needRickshaw++;
            start++;
        }
        else // one person required a rickshaw.
        {
            needRickshaw++;
        }
    }

    cout<<needRickshaw<<endl;


    return 0;
}
 */