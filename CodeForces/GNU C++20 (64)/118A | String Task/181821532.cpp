#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
string toLower(string s);
bool isVowels(char ch);
int main() {
    fraction(9);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    string s;
    cin>>s;
    s = toLower(s);
    for (int i = 0; i < s.size(); ++i) {
        if( !isVowels(s[i]) )
            cout<<"."<<s[i];
    }
    //code
    return 0;
}
string toLower(string s)
{
    string lower = "";
    for(int i=0;i<s.size();i++)
    {
        if( s[i] >= 'a' && s[i] <= 'z')
        {
            lower += s[i];
        }
        else
            lower +=  (s[i] + ('a' - 'A')) ;
    }
    return lower;
}
bool isVowels(char ch)
{
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' )
        return true;
    else
        return false;
}
/*
[#]=============================================================[#]
             ___    ____              ____          ___ _
   |_ _|  / ___|__ _ _ __   |  _ \  ___   |_ _| |_
    | |  | |   / _` | '_ \  | | | |/ _ \   | || __|
    | |  | |__| (_| | | | | | |_| | (_) |  | || |_
   |___|  \____\__,_|_| |_| |____/ \___/  |___|\__|
       it's just about time
 
[#]=============================================================[#]
*/