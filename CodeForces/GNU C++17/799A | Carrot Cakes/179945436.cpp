#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
int main() {
    long long n,t,k,d;
    cin>>n>>t>>k>>d;
    if(n<=k)
        cout<<"NO";
    else
    {
        long long time = ceil(n/(double)k);
        if( (time-1) * t > d )
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}