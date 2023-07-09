#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define MAX 500
using namespace std;
 
int main()
{
    long long int current_passngers=0,stop,Max=0;
    cin>>stop;
    for(int i=0;i<stop;i++)
    {
        long long int num1,num2;
        cin>>num1>>num2;
        current_passngers-=num1;
        current_passngers+=num2;
        if(current_passngers>Max)
            Max=current_passngers;
    }
    cout<<Max;
    return 0;
}