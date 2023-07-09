#include <iostream>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void) {
 long long int n,k,m=0;
 char arr[MAX];
 cin>>n>>k;
 char z='a';
 for(int i=0;i<k;i++)
 {
  
  arr[m++]=z;
  z++;
 }
 int j=0;
 for(int i=0;i<n;i++)
 {
  if(j==k)
   j=0;
  cout<<arr[j++];
  
 }
 
 return 0;
}