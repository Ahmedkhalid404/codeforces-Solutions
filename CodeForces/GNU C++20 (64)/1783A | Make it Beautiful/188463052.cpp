#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long tt;
    cin >> tt;
    while(tt--)
    {
        long long n;
        cin >> n;
        vector<long long> ahmed(n);
        map<long long,long long>freq;
        for (int i = 0; i < n; ++i) {
            cin >> ahmed[i];
            freq[ ahmed[i] ]++;
        }
        if( freq[ahmed[0]] == n )
        {
            cout<<"NO\n";
            goto here;
        }
        cout<<"YES\n";
        for (int i = 0,j = n-1; i <= j; ++i,j--) {
            if( i == j)
            {
                cout<<ahmed[j];
            }
            else
            {
                cout<<ahmed[j]<<" "<<ahmed[i]<<" ";
            }
 
        }
        cout<<"\n";
        here:;
    }
 
}