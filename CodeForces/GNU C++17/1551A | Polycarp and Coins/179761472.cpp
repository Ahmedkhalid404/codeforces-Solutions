#include <bits/stdc++.h>
using namespace std;
/*
الكلمة الطيبة صدقة
 */
int main() {
    long long test;
    cin>>test;
    for(int i=0;i<test;i++)
        {
            long long num;
            cin>>num;
            int c1 = (num - 2) / 3;
            int c2 = c1 + 1;
            int dif =  num - (2 * c2 + c1)  ;
            if(dif > 0)
            {
                if(dif % 2 == 0)
                {
                    c2 += dif / 2;
                    c1 += dif / 2;
                }
                else
                {
                    c1++;
                    dif--;
                    c2 += dif / 2;
                    c1 += dif / 2;
                }
            }
            if( num == c1 + 2*c2 )
                cout<<c1<<" "<<c2<<endl;
            else
                cout<<c2<<" "<<c1<<endl;
        }
    return 0;
}