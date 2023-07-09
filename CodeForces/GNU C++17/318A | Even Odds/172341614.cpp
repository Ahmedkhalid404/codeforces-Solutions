#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int number,index;
 cin>>number>>index;
 if(!(number%2))
 {
  if( index <= number/2)
  {
   long long int num=-1;
   num+=2*index;
   cout<<num;
   return 0;
  }
  else
  {
   long long int num=0;
   index-=number/2;
   num+=2*index;
   cout<<num;
   return 0;
  }
 }
 else
 {
  long long int max_odd=number/2;
  max_odd++;
  if(index <= max_odd)
  {
   long long int num=-1;
   num+=2*index;
   cout<<num;
   return 0;
  }
  else
  {
   long long int num=0;
   index-=max_odd;
   num+=2*index;
   cout<<num;
   return 0;
  }
 }
 return 0;
}
 
 
 
 