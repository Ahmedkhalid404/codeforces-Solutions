#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void)
{
 long long int size,count=0;
 long long int crime=0;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  long long int num;
  cin>>num;
  if(num<0)
  {
   if(count==0)
    crime++;
   else
    count--;
  }
  else
   count+=num;
 }
 cout<<crime;
 return 0;
}