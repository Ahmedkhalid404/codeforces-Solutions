#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int count=1;
 string str1,str2;
 cin>>str1>>str2;
 long long int j=0;
 for(int i=0;i<str2.size();i++)
 {
  if(str2[i]==str1[j])
  {
   count++;
   j++;
  }
 }
 cout<<count;
 return 0;
}