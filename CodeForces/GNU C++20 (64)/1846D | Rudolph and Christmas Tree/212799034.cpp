#include <bits/stdc++.h>
using namespace std;
#define fraction                cout<< fixed <<showpoint <<setprecision
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    fraction(7);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        double b , h;
        ll size ;
        cin >> size >> b >> h;
        vector< ll >triangles( size );
        for (int i = 0; i < size; ++i) {
            cin >> triangles[i];
        }
        sort( triangles.begin() , triangles.end() );
        double res = 0;
        for (int i = 0; i < size - 1; ++i) {
            double diff = triangles[i + 1] - triangles[i];
            if( diff < h )
            {
                res = res + ( ( 0.5 * ( b - ( (b/(double)h) * (double)diff ) ) * (h - diff) ) );
            }
        }
 
        cout<<( size * ( 0.5 * b * h ) ) - res<<'\n';
    }
    //cout<<( 2 * ( 0.5 * 4 * 3 ) ) - ( 0.5 * ( 4 - ( (4/3.0) * 2.0 ) ) * 1 ) ;
    return 0;
}