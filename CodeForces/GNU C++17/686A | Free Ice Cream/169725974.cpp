#include <iostream>
#include <stdio.h>
#define MAX 500
 
using namespace std;
//Functions
 
//*************************************************************
int main(void) {
 long long int size,packets,not_=0;
 cin>>size>>packets;
 for(int i=0;i<size;i++)
 {
  long long int num;
  char space,sign;
  cin>>sign>>num;
  if(sign == '+')
   packets+=num;
  else
  {
   if(packets>=num)
    packets-=num;
   else
    not_++;
  }
  
 }
 cout<<packets<<" "<<not_;
 return 0;
}
//*****************************************************************
 
//*****************************************************************
 
 