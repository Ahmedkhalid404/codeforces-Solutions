#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
/*
 واذا ضربت فاوجع واذا صرخت فأسمع فان العاقبة واحدة :)
 */
int main() {
    long long size;
    cin>>size;
    for(int i=0;i<size;i++)
        {
            long long length,sum=0;
            cin>>length;
            for(int j=0;j<length;j++)
                {
                    long long num;
                    cin>>num;
                    sum += num;
                }
            if( sum == length )
                cout<<0<<endl;
            else if( sum > length )
                cout<<sum - length<<endl;
            else
                cout<<1<<endl;
        }
    return 0;
}