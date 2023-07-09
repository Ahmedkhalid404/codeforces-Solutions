#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
int main() {
    long long n,count=0;
    cin>>n;
        while(n>0)
        {
           if(n % 2 == 1)
               count++;
           n /= 2 ;
 
        }
        cout<<count;
    return 0;
}