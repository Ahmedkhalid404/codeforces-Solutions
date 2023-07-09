#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
int main() {
    long long int n, k, t, d;
    cin >> n >> t >> k >> d;
    if (k >= n)
    {
        cout << "NO\n";
    }
    else
    {
        if (d < ((ceil(n / (double)k)) - 1) * t )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}