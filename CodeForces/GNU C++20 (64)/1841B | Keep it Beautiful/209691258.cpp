#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while(  tt-- )
    {
        ll size ;
        cin >> size;
        if( size == 1 )
        {
            ll num;
            cin >> num;
            cout<<1<<'\n';
            continue;
        }
        string res = "11";
        ll first , end;
        cin >> first >> end;
        vector< ll >numbres;
        numbres.push_back( first );
        numbres.push_back( end );
        bool asc = 1;
        bool des = 1;
        ----size;
        while( size-- )
        {
            ll num;
            cin >> num;
            if( num == numbres.front() || num == numbres.back() )
            {
                res.push_back( '1' );
                numbres.push_back( num );
                continue;
            }
            bool flag1 = true;
            bool flag2 = true;
            ll sz = numbres.size();
            if( numbres.front() > num && asc )
            {
                for (int i = 0; i < sz - 1; ++i) {
                    if( numbres[i] > numbres[ i + 1 ])
                    {
                        flag1 = false;
                        asc = false;
                        break;
                    }
                }
            }
            else
            {
                flag1 = false;
            }
            if( !flag1 && numbres.back() < num && des )
            {
                for (int i = 0; i < sz - 1; ++i) {
                    if( numbres[i] > numbres[ i + 1 ])
                    {
                        flag2 = false;
                        des = false;
                        break;
                    }
                }
            }
            else
                flag2 = false;
            if( flag1 || flag2 )
            {
                res.push_back( '1' );
                numbres.push_back( num );
            }
            else
            {
                if( num > numbres.back() && num < numbres.front() )
                {
                    numbres.push_back( num );
                    res.push_back( '1' );
                }
                else
                {
                    res.push_back( '0' );
                }
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}