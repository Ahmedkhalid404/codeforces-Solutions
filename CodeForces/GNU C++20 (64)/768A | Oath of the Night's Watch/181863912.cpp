#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(nullptr);cout.tie(nullptr)
using namespace std;
int main() {
    fraction(9);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    ll size;
    multiset<ll>numbers;
    set<ll>number;
    cin>>size;
    if(size <= 2)
    {
        cout<<0;
        return 0;
    }
    for (int i = 0; i < size; ++i) {
        ll num;
        cin>>num;
        numbers.insert(num);
        number.insert(num);
    }
    if(number.size() <= 2)
    {
        cout<<0;
        return 0;
    }
    vector<ll>numberv(number.begin(),number.end());
    number.clear();
    ll count = 0;
    for (int i = 1; i < numberv.size(); ++i) {
        if(i == numberv.size()-1)
            break;
        if( numbers.count(numberv[i-1]) >= 1 && numbers.count(numberv[i+1]) >= 1 )
            count += numbers.count( numberv[i] );
    }
    cout<<count;
    //code
    return 0;
}
/*
        [#]=============================================================[#]
 
   |_ _|  / ___|__ _ _ __   |  _ \  ___   |_ _| |_
    | |  | |   / _` | '_ \  | | | |/ _ \   | || __|
    | |  | |__| (_| | | | | | |_| | (_) |  | || |_
   |___|  \____\__,_|_| |_| |____/ \___/  |___|\__|
       it's just about time
 
        [#]=============================================================[#]
*/