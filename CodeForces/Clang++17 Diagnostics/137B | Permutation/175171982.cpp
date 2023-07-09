#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
using namespace std;
 
int main()
{
    set<int> num;
    int size,count=0;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        num.insert(x);
    }
    for(auto it : num)
    {
        if(it<1 || it > size)
            count++;
    }
    count += (size - num.size());
    cout<<count;
    return 0;
}