#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void) {
 long long int num1,num2;
 cin>>num1>>num2;
 if( (num2 - num1 == 1) || (num2%2 !=0 && num2 - num1 <=2) || (num1 == num2))
 {
  cout<<"-1";
  return 0;
 }
 else
 {
  if(num1 % 2 == 0)
  {
   cout<<num1<<" "<<num1+1<<" "<<num1+2;
  }
  else
  {
   cout<<num1+1<<" "<<num1+2<<" "<<num1+3;
  }
 }
 return 0;
}