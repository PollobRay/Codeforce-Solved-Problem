//
// Created by Ray on 8/1/2022.
//

#include<iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

/*
int main()
{
    int n,m;
    
    cin>>n>>m;
    
    vector<pair<int,int> > patientRecord(n); //arrival, treatment
    set<int> vecantCentre;
    map<int,vector<int>> dischargeDay;
    vector<int> clinicTreat(m,0);

    for (int i = 0; i <n ; ++i)
    {
        cin>>patientRecord[i].first;
    }
    for (int i = 0; i <n ; ++i)
    {
        cin>>patientRecord[i].second;
    }
    //set vecant
    for (int i = 0; i < m; ++i)
    {
        vecantCentre.insert(i);
    }

    sort(patientRecord.begin(),patientRecord.end());

    for (int i = 0; i <n ; ++i)
    {
        map<int,vector<int>>::iterator it;
        for (it=dischargeDay.begin();it!=dischargeDay.end();)
        {
            if(it->first>patientRecord[i].first)
                break;
            for (int clinicNo:it->second)
            {
                vecantCentre.insert(clinicNo);
            }
            dischargeDay.erase(it++); //getting run time error

        }

        if(vecantCentre.size()==0)
            continue;

        //finding free clinic
        auto it1=vecantCentre.lower_bound(i%m);
        if(it1==vecantCentre.end())//find in next part
        {
            it1=vecantCentre.begin();
        }
        clinicTreat[*it1]++;
        dischargeDay[patientRecord[i].first+patientRecord[i].second].push_back(*it1);
        vecantCentre.erase(it1);
    }

    for (int i = 0; i < m; ++i)
    {
        cout<<clinicTreat[i]<<" ";
    }


    return 0;
}

 */