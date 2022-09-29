/*
    Problem Statement:
        An array arr a mountain if the following properties hold:  
            arr.length >= 3 There exists some i with 0 < i < arr.length - 1 
        such that: arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
                   arr[i] > arr[i + 1] > ... > arr[arr.length - 1]    
    Given a mountain array arr , return the index i such that 
    arr[0] < arr[1] < ... < arr[i 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
    You must solve it in O(log(arr.length)) time complexity.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int find_peak_index(int*,int);
int main()
{
    int *arr,n,i;
    cout<<"Enter number of elements : ";
    cin>>n;
    arr=(int*)malloc(sizeof(int)*n);
    cout<<"Enter "<<n<<" elements ---"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Peak Index = "<<find_peak_index(arr,n);
    free(arr);
    return 0;
}
int find_peak_index(int *a,int n)
{
    int mid=n/2;
    while(!(a[mid]>a[mid-1] && a[mid]>a[mid+1]))
    {
        if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
            mid++;
        else if(a[mid]<a[mid-1] && a[mid]>a[mid+1])
            mid--;
    }
    return mid;
}