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
    fraction(2);
    fastIO();
    //code
        string word;
        cin>>word;
        for(int i=0;i<word.size();)
        {
            if( word[i] == '.' )
            {
                cout<<0;
                i++;
            }
            else if(word[i] == '-' && word[i+1] == '-')
            {
                cout<<2;
                i+=2;
            }
            else if (word[i] == '-' && word[i+1] == '.')
            {
                cout<<1;
                i+=2;
            }
        }
    //code
    return 0;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}