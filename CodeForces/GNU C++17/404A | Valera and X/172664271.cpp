#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
 
int main(void) {
 char arr[MAX][MAX];
 long long int size;
 char check1,check2;
 bool flag=true;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  for(int j=0;j<size;j++)
  {
   cin>>arr[i][j];
   if(i==0 && j==0)
   {
    check1=arr[i][j];
   }
   else if(i==0 && j==1)
   {
    check2=arr[i][j];
    if(check1==check2)
    {
     flag=false;
    }
   }
   else
   {
    if(arr[i][j] != check1 && arr[i][j] != check2)
    {
     flag=false;
    }
   }
   
  }
 }
 if(flag==false)
 {
  cout<<"NO";
  return 0;
 }
 char ch1=arr[0][0];
 long long int num_row=0,num_col=0;
 long long int num_row_l=0,num_col_l=size-1;
 while(num_row<=size-1)
 {
  if(arr[num_row][num_col] != ch1)
  {
   cout<<"NO";
   return 0;
  }
  if(arr[num_row_l][num_col_l] != ch1)
  {
   cout<<"NO";
   return 0;
  }
  arr[num_row][num_col]='0';
  arr[num_row_l][num_col_l]='0';
  num_row++;
  num_col++;
  num_row_l++;
  num_col_l--;
 }
 ch1=arr[0][1];
 for(int i=0;i<size;i++)
 {
  for(int j=0;j<size;j++)
  {
   if(arr[i][j]=='0')
    continue;
   if(arr[i][j] != ch1)
   {
    cout<<"NO";
    return 0;
   }
  }
 }
 cout<<"YES";
 return 0;
}