//
// Created by pollob on 5/21/2021.
//

// print N'th palindrome number

/*
#include<iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n)
{
    int reverse=0,rem,temp;

    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }

    if (n==reverse)
        return true;
    else
        return false;

}

int main()
{
    int n,palindromeNumber=0,number=0;
    cin>>n;


    while (n!=palindromeNumber)
    {
        number++;
        if (isPalindrome(number))
            palindromeNumber++;
    }

    cout<<number<<endl;


    return 0;
}
 */