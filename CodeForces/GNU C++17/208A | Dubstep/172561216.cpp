#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 string word;
 cin>>word;
 for(int i=0;i<word.size();i++)
 {
  if(word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')
  {
   word.replace(i,3," ");
  }
 }
 for(int i=0;i<word.size();i++)
 {
  if(word[i]== ' ' && word[i+1] == ' ')
  {
   for(int j=i;j<word.size();j++)
   {
    if(word[j] != ' ')
    {
     word.replace(i,(j-i)," ");
     break;
    }
   }
  }
 }
 if(word[0]==' ')
 {
  word.erase(0,1);
 }
 if(word[word.size()-1]==' ')
 {
  word.erase(word.size()-1);
 }
 cout<<word;
 return 0;
}