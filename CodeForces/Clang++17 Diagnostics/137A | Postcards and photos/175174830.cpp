#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 500
using namespace std;
 
int main()
{
    string word="Gomaa";
    cin>>word;
    int start=0,count=0,end=1;
    char ch=word[0];
    while(word.size())
    {
        if(ch != word[end])
        {
            word.erase(0,end);
            ch=word[0];
            end=1;
            count++;
        }
        else if(end == 4)
        {
            word.erase(0,end+1);
            ch=word[0];
            end=1;
            count++;
        }
        else
        {
            end++;
        }
    }
    cout<<count;
    return 0;
}