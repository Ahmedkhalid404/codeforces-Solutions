#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int levels,lev_x,lev_y;
 set<int> x_y;
 cin>>levels;
 cin>>lev_x;
 for(int i=0;i<lev_x;i++)
 {
  int num;
  cin>>num;
  x_y.insert(num);
 }
 cin>>lev_y;
 for(int i=0;i<lev_y;i++)
 {
  int num;
  cin>>num;
  x_y.insert(num);
 }
 if(x_y.size() == levels)
 {
  cout<<"I become the guy.";
 }
 else
 {
  cout<<"Oh, my keyboard!";
 }
 return 0;
}
 
 
 
 