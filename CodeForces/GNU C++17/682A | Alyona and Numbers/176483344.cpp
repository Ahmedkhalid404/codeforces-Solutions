#include <bits/stdc++.h>
#define MAX 500
 
using namespace std;
int main(void) {
    long long num1,num2,count=0;
    cin>>num1>>num2;
    if(num1>num2)
    {
        int temp=num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i=1;i<=num1;i++)
    {
        if(i%5==1)
        {
            if(num2>=4)
            {
                int num = (num2 - 4) /5;
                num++;
                count += num;
            }
 
        }
        else if(i%5==2)
        {
            if(num2>=3)
            {
                int num = (num2 - 3)/5;
                num++;
                count +=num;
            }
        }
        else if(i%5==3)
        {
            if(num2>=2)
            {
                int num = (num2 - 2)/5;
                num++;
                count +=num;
            }
        }
        else if(i%5==4)
        {
            if(num2>=1)
            {
                int num = (num2 - 1)/5;
                num++;
                count +=num;
            }
        }
        else
        {
            if(num2>=5)
            {
                int num = (num2 - 5)/5;
                num++;
                count +=num;
            }
        }
    }
    cout<<count;
 return 0;
}