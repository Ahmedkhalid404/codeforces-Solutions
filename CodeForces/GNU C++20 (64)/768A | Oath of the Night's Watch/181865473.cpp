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
    multiset<ll>numbers;
    ll size,Min,Max;
    cin>>size;
    if(size <= 2)
    {
        cout<<0;
        return 0;
    }
    for(register int i=0;i<size;i++)
    {
        ll num;
        cin>>num;
        if(i==0)
        {
            Min = num;
            Max = num;
        }
        else
        {
            if( num > Max )
                Max = num;
            if( num < Min )
                Min = num;
        }
        numbers.insert(num);
    }
    ll sizeMin = numbers.count( Min );
    ll sizeMax = numbers.count( Max );
    if(Min == Max)
        cout<<size - (sizeMin);
    else
        cout<< size - (sizeMin + sizeMax ) ;
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