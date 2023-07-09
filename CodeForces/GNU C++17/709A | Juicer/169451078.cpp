#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int oranges,max,delet,count=0,all=0;
 long long int num;
 cin>>oranges>>max>>delet;
 for(int i=0;i<oranges;i++)
 {
  cin>>num;
  if(num<=max)
  {
   all+=num;
   
  }
  if(all>delet)
  {
   all=0;
   count++;
  }
 }
 cout<<count;
 return 0;
}