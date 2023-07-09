#include <bits/stdc++.h>
#define MAX 500000
using namespace std;
int main(void) {
    long long size,n=0;
    long long arr[MAX],counter[MAX];
    string dir;
 
    cin>>size;
    cin>>dir;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++)
    {
        if(dir[i] == 'R' && dir[i+1] == 'L')
        {
            counter[n++] = (arr[i+1] - arr[i])/2;
        }
    }
    if(n==0)
        cout<<-1;
    else
    {
        int mini=counter[0];
        for(int i=1;i<n;i++)
        {
            if(counter[i] < mini)
                mini = counter[i];
        }
        cout<<mini;
    }
    return 0;
}