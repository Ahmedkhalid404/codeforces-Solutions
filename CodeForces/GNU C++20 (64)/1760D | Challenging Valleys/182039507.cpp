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
    ll t;
    cin>>t;
    while(t--) {
        bool flagHigh=false,flagLow=false;
        ll size;
        cin >> size;
        ll arr[size];
        for (int i = 0; i < size; ++i) {
            cin>>arr[i];
        }
        if(size == 1)
        {
            Yes<<ln;
            goto here;
        }
        for (int i = 0; i < size-1; ++i) {
            if( arr[i] < arr[i+1] )
            {
                flagHigh = false;
                flagLow = true;
            }
            else if(arr[i] > arr[i+1])
            {
                if( flagLow == true )
                {
                    No<<ln;
                    goto here;
                }
                else
                {
                    flagHigh = true;
                    flagLow = false;
                }
            }
            else
                continue;
 
        }
        Yes<<ln;
        here:;
    }
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