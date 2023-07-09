#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(void)
{
 string word;
 long long step1=0,step2=0,allstep=0;
 cin>>word;
 if(word[0]!='a')
  word='a'+word;
 for(int i=0;i<word.size()-1;i++)
 {
  step2=0;
  step1=0;
  char j=word[i];
  while(1)
  {
   if(j==word[i+1])
    break;
   
   if(j=='a')
    {
     j='z';
     step2++;
    }
   if(j==word[i+1])
    break;
   j--;
   step2++;
   
  }
  j=word[i];
  while(1)
  {
   if(j==word[i+1])
    break;
   
   if(j=='z')
   {
    step1++;
    j='a';
   }
   if(j==word[i+1])
    break;
   j++;
   step1++;
  }
  allstep+=min(step1,step2);
 }
 cout<<allstep;
 return 0;
}