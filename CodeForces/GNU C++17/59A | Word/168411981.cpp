#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define MAX 500
using namespace std;
 
void ToUpper(string &str);
void ToLower(string &str);
int main()
{
    string str;
    long long int count_small=0,count_upper=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            count_small++;
        else
            count_upper++;
    }
    //cout<<count_small<<endl<<count_upper<<endl;
    if(count_small==count_upper)
        ToLower(str);
    else if(count_small>count_upper)
        ToLower(str);
    else
        ToUpper(str);
    cout<<str<<endl;
    return 0;
}
void ToUpper(string &str)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-='a'-'A';
    }
}
void ToLower(string &str)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+='a'-'A';
    }
}