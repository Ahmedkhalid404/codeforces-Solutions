#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
 
int main(void) {
 long long int length=0,width=0,floor=0;
 long long int count_w=0,count_l=0,sec_floor=0;
 cin>>length>>width>>floor;
 if(floor==1)
 {
  cout<<length*width;
 }
 else
 {
 while(sec_floor < width)
 {
  sec_floor+=floor;
  count_w++;
 }
 
 sec_floor=0;
 
 while(sec_floor < length)
 {
  sec_floor+=floor;
  count_l++;
 }
 cout<<count_w*count_l;
 }
 
 
 return 0;
}