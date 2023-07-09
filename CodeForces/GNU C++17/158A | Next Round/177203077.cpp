#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void) {
    long long size,num,k,count=0;
    long long arr[MAX];
    cin>>size>>k;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    k = arr[k-1];
    for(int i=0;i<size;i++)
    {
        if(arr[i] >= k && arr[i] != 0)
            count++;
    }
    cout<<count;
    return 0;
}