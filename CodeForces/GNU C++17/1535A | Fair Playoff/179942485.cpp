#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
int main() {
    long long testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++)
    {
        long long arr[4],maxe,mine;
        long long sortArr[4];
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
            sortArr[j] = arr[j];
        }
        sort(sortArr,sortArr+4);
        long long winner_one = max(arr[0],arr[1]);
        long long winner_two = max(arr[2],arr[3]);
        if( (winner_one == sortArr[3] || winner_one == sortArr[2] )&& (winner_two == sortArr[3] || winner_two == sortArr[2] ))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}