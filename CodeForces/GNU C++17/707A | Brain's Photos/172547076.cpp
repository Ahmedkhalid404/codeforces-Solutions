#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int size=0,color=0;
 bool black_white=false,colorfull=false;
 cin>>size>>color;
 for(int i=0;i<size;i++)
 {
  char ch;
  for(int j=0;j<color;j++)
  {
   cin>>ch;
   if(ch=='B' || ch == 'W' || ch == 'G')
   {
    black_white=true;
   }
   if( ch=='C' || ch == 'M' || ch=='Y' )
   {
    colorfull=true;
   }
  }
 }
 if(black_white == true && colorfull == false)
 {
  cout<<"#Black&White";
 }
 else
 {
  cout<<"#Color";
 }
 return 0;
}
 
 
 