#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
struct contest{
    ll points = 0;
    ll penalty = 0;
    ll idx = 0;
};
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size , problemsCnt , time;
        cin >> size >> problemsCnt >> time;
        vector< contest >members( size );
        for (int i = 0; i < size; ++i) {
            vector< ll >problems( problemsCnt );
            for (int j = 0; j < problemsCnt; ++j) {
                cin >> problems[ j ];
            }
            sort( problems.begin() , problems.end() );
            ll sum = 0;
            ll prefix = 0;
            ll penalty = 0;
            members[i].idx = i + 1;
            for (int j = 0; j < problemsCnt; ++j) {
                if( (( problems[j] + prefix)) > time )
                    break;
                sum = (( problems[j] + prefix));
                prefix += problems[j];
                penalty += sum;
                members[i].points++;
            }
            members[i].penalty = penalty;
        }
        sort( members.begin() , members.end() , [](contest x,contest y){
            if( x.points == y.points )
            {
                if( x.penalty == y.penalty )
                    return x.idx < y.idx;
                return x.penalty < y.penalty;
            }
            return x.points > y.points;
        } );
        for (int i = 0; i < size; ++i) {
            if( members[i].idx == 1 )
            {
                cout<<i + 1<<'\n';
                break;
            }
        }
    }
    return 0;
}