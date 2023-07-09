#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main() {
    fraction(1);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    vector<int>numbers(3);
    for (int i = 0; i < numbers.size(); ++i) {
        cin>>numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    cout<< (numbers[1] - numbers[0]) + (numbers[2] - numbers[1]);
    //code
    return 0;
}