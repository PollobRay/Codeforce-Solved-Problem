//
// Created by Ray on 7/29/2022.
//
// AC
/*
#include <iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
   vector<pair<int,int>> coord;
   set<pair<int,int>> coord_sorted;
   int n;
   int x,y;
   long long max_area=INT32_MIN;
   long long min_area=INT32_MAX;
   
   pair<int,int> cd;
   
   cin>>n;

    for (int i = 1; i <=n ; ++i) 
    {
        cin>> x>>y;
        cd= make_pair(x,y);
        coord.push_back(cd);
        coord_sorted.insert(cd);
    }

    for (int i = 0; i <coord.size() ; ++i)
    {
        for (int j = 0; j <coord.size() ; ++j)
        {
            pair<int,int> p1=coord[i];
            pair<int,int> p2=coord[j];

            int x1=p1.first;
            int y1=p1.second;
            int x2=p2.first;
            int y2=p2.second;

            if(p1.first==p2.first) // making straight line
                continue;
            if(p1.second==p2.second) //making straight line
                continue;

            //checking valid diagonal
            if(coord_sorted.count(make_pair(x1,y2))&&coord_sorted.count(make_pair(x2,y1)) )//count works as O(logn)
            {
                long long area= abs(x1-x2)* abs(y1-y2);

                if(max_area<area)
                    max_area=area;
                if(min_area>area)
                    min_area=area;
            }
        }

    }
    if(max_area==INT32_MIN)
        cout<<-1<<endl;
    else
        cout<<max_area-min_area<<endl;

    return 0;
}
 */