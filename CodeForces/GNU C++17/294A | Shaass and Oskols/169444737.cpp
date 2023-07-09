#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
 
using namespace std;
int main(){
 long long int size_boxes,kill;
 long long int arr_boxes[MAX];
 //********************************************************
 cin>>size_boxes;
 for(int i=0;i<size_boxes;i++)
 {
  cin>>arr_boxes[i];
 }
 cin>>kill;
 //*******************************************************
 for(int i=0;i<kill;i++)
 {
  long long int box,bird;
  cin>>box>>bird;
  //****************first box*****************//
  if(box==1)
  {
   box--;
   arr_boxes[box+1]+=(arr_boxes[box]-bird);
   arr_boxes[box]=0;
  }
  //****************last box******************//
  else if(box==size_boxes)
  {
   box--;
   arr_boxes[box-1]+=(bird-1);
   arr_boxes[box]=0;
  }
  //*****************normal box***************//
  else
  {
   box--;
   arr_boxes[box+1]+=(arr_boxes[box]-bird);
   arr_boxes[box-1]+=(bird-1);
   arr_boxes[box]=0;
  }
 }
 //*********************************************************
 for(int i=0;i<size_boxes;i++)
 {
  cout<<arr_boxes[i]<<endl;
 }
 return 0;
}