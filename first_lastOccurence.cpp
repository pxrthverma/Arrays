#include <iostream>
using namespace std;

int firstOcc(int arr[],int start,int end, int num)
{
    int ans=0;
    int mid= start + (end - start)/2;
    while(start<=end)
    {
        if(num==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else if(num<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid= start + (end - start)/2;
    }
    return ans;
}


int main()
{
    int arr[12]={1,2,3,3,3,3,3,3,3,4,5,6};
    cout<<firstOcc(arr,0,11,3);
    cout<<"First occurence at index: "<<firstOcc(arr,0,11,3);
    return 0;
}