/*
    Problem Statement :-
        Given an integer array nums , return an array answer such that answer[i] is equal to the
    product of all the elements of nums except nums[i] .
    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
    You must write an algorithm that runs in O(n) time and without using the division operation.
*/
#include<iostream>
using namespace std;
int* productArray(int*,int);
int main()
{
    int nums[30],answer[30],n,i;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers ---";
    for(i=0;i<n;i++)
        cin>>nums[i];
    return 0;
}
int* productArray(int* a,int n)
{
    int i;
    int *ans=NULL;
    ans=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        
    }
    free(ans);
}