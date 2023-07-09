#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
using namespace std;
 
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
void fastIO();
void fun(int i);
int main() {
    fraction(9);
    fastIO();
    //code
    ll testCasese;
    cin>>testCasese;
    for (int i = 0; i < testCasese; ++i) {
        ll size,sum=0;
        double result;
        cin>>size;
        ll arr[size];
        for (int j = 0; j < size; ++j) {
            cin>>arr[j];
            sum += arr[j];
        }
        sort(arr,arr+size);
        result = arr[size-1] + ((sum-arr[size-1]) / (double)(size - 1));
        cout<<result<<ln;
 
    }
    //code
    return 0;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}