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

int rotatedArrSearch(int arr[], int target, int n)
{   
    int start=0,end=n-1,mid;
    mid = findPivot(arr,n);
    if(target==arr[mid])
    {
        return mid;
    }
    else
    {
        while(start<end)
        {
            if(target==arr[mid])
            {
                return mid;
            }
            if(target>=arr[mid] && target<=arr[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return mid;
    }
}

int main()
{
    int arr[]={6,7,10,11,1,2,4};
    cout<<"Target is at index: "<<rotatedArrSearch(arr,6,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,7,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,10,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,11,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,1,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,2,sizeof(arr)/sizeof(arr[0]))<<endl;
    cout<<"Target is at index: "<<rotatedArrSearch(arr,4,sizeof(arr)/sizeof(arr[0]))<<endl;
}