#include <iostream>
using namespace std;

int square(int num)
{
    return num*num;
}

int sq_root(int num)
{
    int start = 0,end=num,mid;
    mid=start+(end-start)/2;

    while(start<end)
    {
        if(square(mid)==num)
            {
                return mid;
            }
        if(square(mid)>num)
        {
            end=mid-1;
        }

        else if(square(mid)<=num && square(mid+1)>num)
        {
            return mid;
        }

        else
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
}

float decimal(int n, int temp, int precision)
{
    float num=1;
    float num1=(float)temp;
    
    for(int i=0;i<precision;i++)
    {
        num/=10;

        for(double j=num1;square(j)<n;j=j+num)
        {
            num1=j;
        }
    }

    return num1;
}

int main()
{

    int temp=sq_root(39);
    cout<<temp<<endl;
    float dec = decimal(39,temp,3);
    cout<<"Final ans: "<<dec;

}