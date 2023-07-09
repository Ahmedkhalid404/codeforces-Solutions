#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void)
{
 long long int arr[4],rep[4];
 long long int repeat=0,n=0;
 bool flag=true;
 for(int i=0;i<4;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<4;i++)
 {
  flag=true;
  for(int k=0;k<n;k++)
  {
   if(arr[i]==rep[k])
   {
    flag=false;
    break;
   }
  }
  for(int j=0;j<4;j++)
  {
   if(i==j)
    continue;
   if(arr[i]==arr[j])
   {
    if(flag)
    {
     rep[n++]=arr[i];
     repeat++;
    }
    
   }
    
  }
  /*
  if(repeat==3)
   break;
   */
 }
 cout<<repeat;
 return 0;
}