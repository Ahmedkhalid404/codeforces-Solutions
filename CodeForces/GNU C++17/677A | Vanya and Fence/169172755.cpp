#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void){
 long long int size,high,count=0;
 cin>>size>>high;
 for(int i=0;i<size;i++)
 {
  long long int num;
  cin>>num;
  if(num>high)
   count+=2;
  else
   count++;
 }
 cout<<count;
 return 0;
}