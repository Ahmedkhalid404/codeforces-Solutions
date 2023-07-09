#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void){
 long long int size,arr[MAX];
 cin>>size;
 for(int i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 sort(arr,arr+size);
 for(int i=0;i<size;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 return 0;
}