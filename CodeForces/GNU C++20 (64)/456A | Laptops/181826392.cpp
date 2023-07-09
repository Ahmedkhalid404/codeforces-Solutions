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
    vector<pair<ll,ll>> numbers;
    ll size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        ll num1,num2;
        cin>>num1>>num2;
        numbers.push_back(make_pair(num1,num2) );
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size()-1;i++)
    {
        if( numbers[i].second > numbers[i+1].second )
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
 
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