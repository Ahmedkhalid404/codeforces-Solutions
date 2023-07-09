#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void)
{
 string word;
 long long int count=0,n;
 cin>>n;
 cin>>word;
 for(int i=0;i<word.size()-1;i++)
 {
  if(word[i]==word[i+1])
   count++;
 }
 cout<<count;
 return 0;
}