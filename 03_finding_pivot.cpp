#include <iostream>
using namespace std;

int findPivot(int arr[],int n)
{
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[]={6,9,10,11,1};
    cout<<findPivot(arr,sizeof(arr)/sizeof(arr[0]));
}