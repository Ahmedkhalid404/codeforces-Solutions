#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
 
int main(void) {
 long long int size=0,count=0;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  string word;
  cin>>word;
  if(word=="Tetrahedron")
  {
   count+=4;
  }
  else if(word=="Cube")
  {
   count+=6;
  }
  else if(word=="Octahedron")
  {
   count+=8;
  }
  else if(word=="Dodecahedron")
  {
   count+=12;
  }
  else if(word=="Icosahedron")
  {
   count+=20;
  }
 }
 cout<<count;
 return 0;
}