//
// Created by Ray on 6/28/2022.
//

#include <iostream>
#include <map>
#include <set>
using namespace std;
/*
int main()
{
    int n,mark;
    string name;

    map<int,multiset<string> > list; //mark and name

    cin>>n;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>name>>mark;

        list[mark].insert(name);
    }

    multimap<int,multiset<string> >::iterator it;
    it=--list.end();

    for (int i = 1; i <=list.size() ; ++i)
    {
        for (auto n:it->second)
        {
            cout<<n<<" "<<it->first<<endl;
        }
        it--;
    }



    return 0;
}
 */

// Or
// we just negative the mark so the mark is being reverse
/*
int main()
{
    int n,mark;
    string name;

    map<int,multiset<string> > list; //mark and name

    cin>>n;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>name>>mark;

        list[-1*mark].insert(name);
    }

    multimap<int,multiset<string> >::iterator it;

    for (it=list.begin();it!=list.end();it++)
    {
        for (auto n:it->second)
        {
            cout<<n<<" "<<-1*(it->first)<<endl;
        }
    }



    return 0;
}
*/