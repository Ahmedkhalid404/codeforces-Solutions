#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
 
int main(void) {
 long long int  num=0;
 cin>>num;
 if(num==0)
 {
  cout<<"1";
  return 0;
 }
 while(num>8)
 {
  num-=4;
 }
 if(num==5 || num==1)
 {
  cout<<"8";
 }
 else if(num==6||num==2)
 {
  cout<<"4";
 }
 else if(num==7||num==3)
 {
  cout<<"2";
 }
 else if(num==8||num==4)
 {
  cout<<"6";
 }
 return 0;
}