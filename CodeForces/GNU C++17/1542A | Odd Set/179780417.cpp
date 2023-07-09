#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فاسمع فان العاقبة واحدة :) 
 */
int main() {
    long long test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        long long size,even=0,odd=0;
        cin>>size;
        for(int j=0;j<size*2;j++)
        {
            long long num ;
            cin>>num;
            if(num % 2 == 1)
                odd++;
            else
                even++;
        }
        if( even == odd )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}