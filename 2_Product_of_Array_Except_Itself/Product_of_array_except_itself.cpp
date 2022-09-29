/*
    Problem Statement :-
        Given an integer array nums , return an array answer such that answer[i] is equal to the
    product of all the elements of nums except nums[i] .
    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
    You must write an algorithm that runs in O(n) time and without using the division operation.
*/
#include<iostream>
using namespace std;
void productArray(int*,int*,int);
int main()
{
    int n,*arr,*answer,i;
    cout<<"Enter number of elements : ";
    cin>>n;
    arr=(int*)malloc(sizeof(int)*n);
    answer=(int*)malloc(sizeof(int)*n);
    cout<<"Enter "<<n<<" elements ---"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    productArray(arr,answer,n);
    for(i=0;i<n;i++)
        cout<<answer[i]<<" ";
    free(arr);
    free(answer);
    return 0;
}
void productArray(int *a,int *ans,int n)
{
    int *tmp,i;
    tmp=(int*)malloc(sizeof(int)*n);
    ans[0]=1;
    tmp[n-1]=1;
    for(i=1;i<n;i++)//Left
        ans[i]=ans[i-1]*a[i-1];
    for(i=n-2;i>=0;i--)//right
        tmp[i]=tmp[i+1]*a[i+1];
    for(i=0;i<n;i++)//Final
        ans[i]=ans[i]*tmp[i];
    free(tmp);
}