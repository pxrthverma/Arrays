#include<iostream>
using namespace std;

int peak(int arr[],int start, int end)
{
    int mid = start + (end-start)/2;
    while(start!=end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start)/2;
    } 
    return arr[mid];
}

int main()
{
    int arr[]={3,4,5,6,7,5,4,3,2,1,0};
    cout<<peak(arr,0,6);
    return 0;
}