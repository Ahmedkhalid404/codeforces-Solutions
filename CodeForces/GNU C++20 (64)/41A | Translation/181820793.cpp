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
int main() {
    fraction(9);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if( s == t )
        Yes;
    else
        No;
    //code
    return 0;
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