#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
using namespace std;
 
int diffrent(int x,int y);
int main()
{
    vector  <int>   numbers;
    set     <int>   sortNumbers;
    //***************************
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int num;
        cin>>num;
        sortNumbers.insert(num);
    }
    numbers.resize(size);
    copy(sortNumbers.begin(),sortNumbers.end(),numbers.begin());
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {
            cout<<numbers[i+1] - numbers[i];
            cout<<" "<<numbers[size-1]-numbers[i]<<endl;
        }
        else if(i==size-1)
        {
 
            cout<<numbers[i] - numbers[i-1];
            cout<<" "<<numbers[i] - numbers[0]<<endl;
        }
        else
        {
            int small,large;
            small = min( diffrent(numbers[i],numbers[i+1]) ,  diffrent(numbers[i],numbers[i-1]) );
            large = max( diffrent(numbers[i],numbers[0]) ,  diffrent(numbers[i],numbers[size-1]) );
            cout<<small<<" "<<large<<endl;
        }
    }
    return 0;
}
int diffrent(int x,int y)
{
    int num1 = max(x,y);
    int num2 = min(x,y);
    return num1 - num2;
}