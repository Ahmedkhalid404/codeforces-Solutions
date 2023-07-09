#include <iostream>
#include <algorithm>
#define MAX 500
using namespace std;
int main()
{
    int size,sum=0,count=0;
    int ave;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+size);
    ave = sum/2;
    sum=0;
    for(int i=size-1;i>-1;i--)
    {
        sum += arr[i];
        count++;
        if(sum > ave)
        {
            cout<<count;
            return 0;
        }
    }
    return 0;
}