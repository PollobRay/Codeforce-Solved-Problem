//
// Created by pollo on 4/15/2021.
//

#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 2555
/*
class StrType
{
    char *p;
    int len;
public:
    StrType();
    ~StrType();
    void setChar(char *s);
    void show() ;
};

StrType::StrType()
{
    p=(char *)malloc(SIZE);
    if (!p)
    {
        cout<<"Allocation Failed"<<endl;
        exit(1);
    }
    *p='\0';
    len=0;
}

StrType::~StrType()
{
    cout<<"Freeing Memory"<<endl;
    free(p);
}

void StrType::setChar(char *s)
{
    if (strlen(p)>=SIZE)
    {
        cout<<"String is too big to store"<<endl;
        return ;
    }
    strcpy(p,s);
    len=strlen(s);
}

void StrType::show()
{
    cout<<p<<"  len: "<<len<<endl;
}

int main()
{
    StrType s1,s2;
    s1.setChar("Pollob");
    s2.setChar("Ray");

    s1.show();
    s2.show();

    return 0;
}
*/