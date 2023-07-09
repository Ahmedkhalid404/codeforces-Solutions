#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
    ll boy,girl;
    cin >> boy >> girl;
    if( boy == girl )
    {
        while( boy && girl )
        {
            cout<<"BG";
            boy--;
            girl--;
        }
    }
    if( boy < girl )
    {
        while( boy )
        {
            cout<<"GB";
            boy--;
            girl--;
        }
        while( girl-- )
        {
            cout<<'G';
        }
    }
    else
    {
        while( girl )
        {
            cout<<"BG";
            boy--;
            girl--;
        }
        while( boy-- )
        {
            cout<<'B';
        }
    }
    return 0;
}