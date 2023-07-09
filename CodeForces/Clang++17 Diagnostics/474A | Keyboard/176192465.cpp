#include <iostream>
#include <algorithm>
#define MAX 500
using namespace std;
int main()
{
    char keypoard[]=
    {
        'q','w','e','r','t','y','u','i','o','p',
        'a','s','d','f','g','h','j','k','l',';',
        'z','x','c','v','b','n','m',',','.','/'
    };
    string word;
    char r_l;
    cin>>r_l;
    cin>>word;
    if(r_l == 'R')
    {
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<30;j++)
            {
                if(word[i]==keypoard[j])
                {
                    cout<<keypoard[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<30;j++)
            {
                if(word[i]==keypoard[j])
                {
                    cout<<keypoard[j+1];
                    break;
                }
            }
        }
    }
    return 0;
}
/*
        qwertyuiop
        asdfghjkl;
        zxcvbnm,./
*/