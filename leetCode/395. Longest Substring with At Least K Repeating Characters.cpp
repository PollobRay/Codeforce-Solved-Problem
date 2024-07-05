//
// Created by Ray on 7/23/2022.
//
// AC
#include<iostream>
using namespace std;
/*

int maxlen(string &s,int k,int start,int end)
{

    if(end-start+1<k)
        return 0;

    int alphabet[26]={0};

    int len,length=0,s1,e1;
    //counting alphabet
    for (int i = start; i <=end; ++i)
    {
        alphabet[s[i]-'a']++;
    }

    s1=start;
    bool isget=true;


    for (int i = start; i <end ; ++i)
    {
        if(alphabet[s[i]-'a']<k)
        {
            len= maxlen(s,k,s1,i);
            s1=i+1;
            e1=i;

            if(length<len)
                length=len;
            isget=false;
        }

    }
    if(e1!=end&&!isget)
    {
        len= maxlen(s,k,s1,end);
        if(length<len)
            length=len;

    }
    if (isget)
        return end-start;
    return length;
}

int longestSubstring(string s, int k)
{
    if(s.size()<k)
        return 0;

    return maxlen(s,k,0,s.size());

}

int main()
{
    cout<<longestSubstring("ababbc",3);

    return 0;
}
*/