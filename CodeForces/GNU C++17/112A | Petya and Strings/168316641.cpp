#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define MAX 500
using namespace std;
 
void tolower(char str[]);
int main()
{
    char str1[MAX],str2[MAX];
    scanf("%s",&str1);
    scanf("%s",&str2);
    tolower(str1);
    tolower(str2);
    printf("%d",strcmp(str1,str2));
    return 0;
}
void tolower(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+='a'-'A';
    }
}