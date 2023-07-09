#include <bits/stdc++.h>
#define MAX 500
 
using namespace std;
int main(void) {
    int n,k;
    cin>>n>>k;
    int size=n*2+1;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=1,count=0;i<(size-1) && count<k;i++)
    {
        if(arr[i]-1>arr[i-1] && arr[i]-1>arr[i+1])
        {
            count++;
            arr[i]--;
        }
    }
    copy(arr,arr+size,ostream_iterator<int>(cout," "));
 return 0;
}