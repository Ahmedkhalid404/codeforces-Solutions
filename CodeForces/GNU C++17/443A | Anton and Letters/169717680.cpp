#include <iostream>
#include <stdio.h>
#include <set>
#define MAX 500
 
using namespace std;
//Functions
void swap(char &p1,char &p2);
void delete_element(char arr[],int index,long long int &size);
//*************************************************************
int main(void) {
 long long int count=0,size=0;
 char arr[MAX];
 char ch='A';
 cin >> ch;
 while (ch != '}')
 {
  scanf(" %c", &arr[size++]);
  if(arr[size-1]=='}')
  {
   cout<<"0\n";
   return 0;
  }
  cin >> ch;
 }
 /*
 for(int j=0;j<size;j++)
 {
  cout<<arr[j];
 }
 */
 
 set<char> set1;
 for(int i=0;i<size;i++)
 {
  set1.insert(arr[i]);
 }
 cout<<set1.size();
 return 0;
}
//*****************************************************************
void delete_element(char arr[],int index,long long int &size)
{
 for(int i=index;i<size-1;i++)
 {
  swap(arr[i],arr[i+1]);
 }
 size--;
}
void swap(char &p1,char &p2)
{
 char temp=p1;
 p1=p2;
 p2=temp;
}
//*****************************************************************
 