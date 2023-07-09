#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void)
{
 long long int count=0,size;
 long long int arr_home[MAX],arr_gust[MAX];
 cin>>size;
 for(int i=0;i<size;i++)
 {
  cin>>arr_home[i];
  cin>>arr_gust[i];
 }
 for(int i=0;i<size;i++)
 {
  for(int j=0;j<size;j++)
  {
   if(i==j)
    continue;
   if(arr_home[i]==arr_gust[j])
    count++;
  }
 }
 cout<<count;
 return 0;
}