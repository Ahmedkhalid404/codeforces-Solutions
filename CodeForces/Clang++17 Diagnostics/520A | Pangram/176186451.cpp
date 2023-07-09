#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main()
{
    string word;
    int size,count=0;
    cin>>size;
    if(size<26)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        cin>>word;
 
        for(int i=0;i<size;i++)
        {
            if(word[i] >= 'A' && word[i]<='Z')
                word[i] += 'a' - 'A';
        }
        sort(word.begin(),word.end());
        //cout<<word<<endl;
        for(int i=0;i<size-1 && count!=25;i++)
        {
            if(word[i] != word[i+1])
                count++;
        }
        if(count==25)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}