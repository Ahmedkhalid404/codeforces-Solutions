#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
 
long long int prime(long long int num,long long int i);
int main(void) {
 long long int num1,num2;
 cin>>num1>>num2;
 if( prime(num2,num2/2) == 0 )
 {
  cout<<"NO";
 }
 else
 {
 long long int num3 = num1 + 1;
 while(num3 <= num2)
 {
  if( prime(num3,num3/2)==1 && num3 < num2 )
  {
   cout<<"NO";
   return 0;
  }
  if( prime(num3,num3/2)==1 && num3 == num2 )
  {
   cout<<"YES";
   return 0;
  }
  num3++;
 }
 
 }
 
 return 0;
}
long long int prime(long long int num,long long int i)
{
 if(i==1)
 {
  return 1;
 }
 if(num%i==0)
 {
  return 0;
 }
 return prime(num,i-1);
}