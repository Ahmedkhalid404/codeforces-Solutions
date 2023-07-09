#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 50000
 
using namespace std;
int main(void)
{
 long long int count1=0,count2=0,size;
 long long int itretor1=0,itretor2;
 long long int arr[MAX];
 bool flag=true;
 cin>>size;
 itretor2=size-1;
 for(int i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<size;i++)
 {
  if(flag)
  {
   if(arr[itretor1]>arr[itretor2])
   {
    count1+=arr[itretor1];
    itretor1++;
   }
   else
   {
    count1+=arr[itretor2];
    itretor2--;
   }
   flag=false;
  }
  else
  {
   if(arr[itretor1]>arr[itretor2])
   {
    count2+=arr[itretor1];
    itretor1++;
   }
   else
   {
    count2+=arr[itretor2];
    itretor2--;
   }
   flag=true;
  }
  
 }
 cout<<count1<<" "<<count2;
 return 0;
}