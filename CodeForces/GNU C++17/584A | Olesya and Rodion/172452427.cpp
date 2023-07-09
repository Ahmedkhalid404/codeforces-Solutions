#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 50000
 
using namespace std;
int main(){
 long long int n,k;
 cin>>n>>k;
  if(k==10)
  {
   if(n==1)
   {
    cout<<"-1";
   }
   else
   {
    for(int i=0;i<(n-1);i++)
    {
     cout<<"1";
    }
    cout<<"0";
   }
  }
  else{
   for(int i=0;i<n;i++)
   {
    cout<<k;
   }
  }
 return 0;
}
 
 
 