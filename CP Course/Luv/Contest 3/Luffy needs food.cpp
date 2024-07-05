//
// Created by Ray on 7/30/2022.
//
// AC
/*
#include<iostream>
#include <set>
#include <queue>
using namespace std;

int main()
{
    int T,N;
    int D,K;
    int A,F;

    cin>>T;

    for (int l = 1; l <=T ; ++l)
    {
        cin>>N;
        cin>>D>>K;

        multiset<pair<int,int> > islands; //distance, food, based on distance
        priority_queue<int> foodList; // food, distance based on food
        int needToStop=0;

        for (int i = 1; i <=N ; ++i)
        {
            cin>>A>>F;
            islands.insert(make_pair(A*(-1),F));// making negative to by default accending sort
        }

        for (pair<int,int> island:islands)
        {
            int distance = island.first * (-1);
            int food = island.second;

            if (D - distance <= K) //posiible
            {
                K = K - (D - distance);
                D = distance;
                //skipping the island of landing
            }
            else if(foodList.empty())
            {
                break;
            }
            else
            {
                int need = (D - distance);
                while (!foodList.empty())
                {
                    //taking
                    needToStop++;
                    K = K + foodList.top();
                    foodList.pop();

                    if (K >= need)
                    {
                        D = distance;
                        K = K - need;
                        break;
                    }
                }
                if(D!=distance)
                {
                    break;
                }
            }
            foodList.push(food); //max heap
        }
        if(K>=D)
        {
            D=0;
        }
        else
        {
            int need = D;
            while (!foodList.empty())
            {
                //taking
                needToStop++;
                K = K + foodList.top();
                foodList.pop();
                if (K >= need)
                {
                    D = 0;
                    break;
                }
            }
        }

        if(D==0)
            cout<<needToStop<<endl;
        else
            cout<<-1<<endl;

        islands.clear();
    }
    return 0;
}
*/