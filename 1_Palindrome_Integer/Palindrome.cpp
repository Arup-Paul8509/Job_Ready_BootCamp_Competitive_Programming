/*
    Problem Statement:-
        Given an integer x , return true if x is palindrome integer. An integer is a palindrome 
    when it reads the same backward as forward. For example, 121 is a palindrome while 123 is not.

    Input: x = 121 
    Output: true 
    Explanation: 121 reads as 121 from left to right and from right to left.
*/

#include<iostream>
using namespace std;
int isPalindrome(int);
int main()
{
    int x,r;
    cout<<"Enter a number : ";
    cin>>x;
    r=isPalindrome(x);
    if(r==1)
        cout<<"true";
    else if(r==0)
        cout<<"false";
    return 0;
}
int isPalindrome(int x)
{
    int tmp,r,s=0;
    if(x<0)
        return 0;
    tmp=x;
    while(tmp>0)
    {
        r=tmp%10;
        s=s*10+r;
        tmp=tmp/10;
    }
    if(s==x)
        return 1;
    else
        return 0;
}