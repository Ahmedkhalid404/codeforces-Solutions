#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 50000
 
using namespace std;
int main(){
 long long int size;
 long long int arr[MAX],arr2[MAX];
 bool flag=true;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  long long int num;
  cin>>num;
  cin>>arr[i];
  arr2[i]=arr[i];
  if(arr[i] != num)
  {
   flag=false;
  }
 }
 if(flag==false){
  cout<<"rated";
 }
 else{
  sort(arr2,arr2+size);
  int j=size-1;
  for(int i=0;i<size;i++)
  {
   if(arr[i] != arr2[j])
   {
    cout<<"unrated";
    return 0;
   }
   j--;
  }
  cout<<"maybe";
 }
 return 0;
}
 
 
 
 