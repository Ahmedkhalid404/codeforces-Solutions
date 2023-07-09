#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int b, g, n; cin >> b >> g >> n;
    b = min(n, b), g = min(n, g);
    if((b+g) == 2*n) cout << n+1;
    else             cout << (b+g >= n) * ((b+g)%n +1);
}