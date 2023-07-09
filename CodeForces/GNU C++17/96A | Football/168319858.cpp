#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define MAX 500
using namespace std;
int main()
{
    string num;
    long long int count=0;
    cin>>num;
    for(int i=0;i<num.size()-1;i++)
    {
        if(num[i]==num[i+1])
            count++;
        else
            count=0;
        if(count==6)
            {
                cout<<"YES\n";
                return 0;
            }
        
        /*cout<<"i="<<num[i]<<endl;
        cout<<"i+1="<<num[i+1]<<endl;
        cout<<"count="<<count<<endl;*/
 
    }
    cout<<"NO\n";
 
    return 0;
}