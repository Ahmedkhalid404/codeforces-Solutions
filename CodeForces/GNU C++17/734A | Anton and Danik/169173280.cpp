#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void){
 long long int size;
 long long int Anton=0,Danik=0;
 string word;
 cin>>size;
 cin>>word;
 for(int i=0;i<size;i++)
 {
  if(word[i]=='A')
   Anton++;
  else
   Danik++;
 }
 if(Anton>Danik)
  cout<<"Anton"<<endl;
 else if(Anton<Danik)
  cout<<"Danik"<<endl;
 else
  cout<<"Friendship"<<endl;
 return 0;
}