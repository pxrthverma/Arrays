#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

bool isPossibleAns(int arr[],int m, int n, int mid)
{
    int count=1;
    int sum=0;
    int i=0;
    int l=n;
    
    for(int i=0;i<l;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        
        else
        {
            count++;
            if(count>m || arr[i]>mid)
            {
                return false;
            }
            sum=arr[i];
        }
    
        if(count>m)
        {return false;}
    }
    
    return true;
    
}

int bookAllocate(int arr[],int m,int n)
{
    int start,mid,ans,end=0;
    start = *min_element(arr,arr+4);

    for(int i=0;i<n;i++)
    {
        end=end+arr[i];
    }

    mid = start + (end-start)/2;

    cout<<"start: "<<start<<"mid: "<<mid<<"end: "<<end<<endl;
    while(start<=end)
    {
        if(isPossibleAns(arr,m,n,mid))
        {
            end=mid-1;
            ans=mid;
        }

        else
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int main()
{
    int arr[5]={30,70,80,85};
    
    cout<<bookAllocate(arr,2,4);
}