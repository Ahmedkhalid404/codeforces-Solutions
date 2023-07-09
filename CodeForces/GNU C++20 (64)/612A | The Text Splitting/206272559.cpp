#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('♡');
    ll n, p, q;
    string s;
    cin >> n >> p >> q;
    cin >> s;
    if (!(n % p)) {
        cout << n / p << ln;
        for (int i = 0; i < n; i += p) {
            for (int j = i; j < p + i; ++j) {
                cout << s[j];
            }
            cout << ln;
        }
    } else if (!(n % q)) {
        cout << n / q << ln;
        for (int i = 0; i < n; i += q) {
            for (int j = i; j < i + q; ++j) {
                cout << s[j];
            }
            cout << ln;
        }
    } else {
        ll mn = 0;
        while (true) {
            mn++;
            if (mn * p > n)
                break;
            if (!((n - (mn * p)) % q)) {
                int i = 0;
                ll sz = ((n - (mn * p)) / q);
                cout << mn + sz << ln;
                for (int cnt = 0; cnt < mn; ++cnt) {
                    for (int j = i; j < i + p; ++j) {
                        cout << s[j];
                    }
                    cout << ln;
                    i += p;
                }
 
                for (int cnt = 0; cnt < sz; ++cnt) {
                    for (int j = i; j < i + q; ++j) {
                        cout << s[j];
                    }
                    cout << ln;
                    i += q;
                }
                return 0;
            }
 
        }
        //*************************************************************
        mn = 0;
        while (true) {
            mn++;
            if (mn * q > n)
                break;
            if (!((n - (mn * q)) % p)) {
                int i = 0;
                ll sz = ((n - (mn * q)) / p);
                cout << mn + sz << ln;
                for (int cnt = 0; cnt < mn; ++cnt) {
                    for (int j = i; j < i + q; ++j) {
                        cout << s[j];
                    }
                    cout << ln;
                    i += q;
                }
 
                for (int cnt = 0; cnt < sz; ++cnt) {
                    for (int j = i; j < i + p; ++j) {
                        cout << s[j];
                    }
                    cout << ln;
                    i += p;
                }
                return 0;
            }
        }
        cout<<-1;
    }
    return 0;
}