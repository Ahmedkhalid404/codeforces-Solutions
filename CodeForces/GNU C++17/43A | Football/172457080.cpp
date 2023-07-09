#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500000
 
using namespace std;
int main(){
 string team[MAX];
 set<string> team_no_repeat;
 long long int goals[MAX]={0};
 long long int size,index=0,max=0;
 cin>>size;
 for(int i=0;i<size;i++)
 {
  cin>>team[i];
  team_no_repeat.insert(team[i]);
 }
 set<string>::iterator it = team_no_repeat.begin();
 for(int i = 0;it != team_no_repeat.end();it++)
 {
  for(int j=0;j<size;j++)
  {
   if(*it == team[j])
   {
    goals[i]++;
   }
  }
  i++;
 }
 for(int i=0;i<team_no_repeat.size();i++)
 {
  if(i==0)
  {
   max=goals[i];
  }
  else
  {
   if(goals[i]>max)
   {
    max=goals[i];
    index=i;
   }
  }
 }
 it = team_no_repeat.begin();
 for(int i=0;i<index;i++)
 {
  it++;
 }
 cout<<*it;
 return 0;
}
 
 
 