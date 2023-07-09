#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
bool check(char ch[],ll c,char a);
int main() {
    ll test;
    cin>>test;
    for(int j=0;j<test;j++)
    {
        bool flag = true;
        string s;
        ll size;
        cin>>size;
        char ch[size];
        ll c = 0;
        cin>>s;
        if(size<=2)
        {
            Yes<<ln;
        }
        else
        {
            for (int i = 0; i < size; ++i) {
                if(i==0)
                {
                    ch[c++] = s[i];
                }
                else if(s[i] != s[i-1])
                {
                    if(!check(ch,c,s[i]))
                    {
                        No<<ln;
                        flag = false;
                        break;
                    }
                    else
                    {
                        ch[c++] = s[i];
                    }
                }
            }
            if(flag)
                Yes<<ln;
        }
    }
    return 0;
}
bool check(char ch[],ll c,char a)
{
    for (int i = 0; i < c; ++i) {
        if(ch[i] == a)
            return false;
    }
    return true;
}