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
    while(t--)
    {
        ll size,Max,Max2;
        cin>>size;
        ll arr[size];
        ll arr2[size];
        for (int i = 0; i < size; ++i) {
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2,arr2+size);
        for (int i = 0; i < size; ++i) {
                if( arr[i] == arr2[size-1] )
                    cout<<arr[i] - arr2[size-2]<<" ";
                else
                    cout<<arr[i] - arr2[size-1]<<" ";
        }
        cout<<ln;
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