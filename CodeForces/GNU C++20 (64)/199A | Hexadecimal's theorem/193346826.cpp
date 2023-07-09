#include <bits/stdc++.h>
using namespace std;
int fib(int n);
int main()
{
    long long n;
 
    cin>>n;
    if(n == 3)
        cout<<"1 1 1";
    else if(n==0)
        cout<<"0 0 0";
    else if(n==2)
        cout<<"1 1 0";
    else if(n==1)
        cout<<"1 0 0";
    else
    {
        int i = 5;
        while(true)
        {
            if(fib(i) == n)
                {
                    cout<<fib(i-1)<<" "<<fib(i-2)<<" "<<0;
                    break;
                }
            i++;
        }
    }
}
int fib(int n)
{
    int f[500] = {0};
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    // If fib(n) is already computed
    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;
 
    // Applying above formula [Note value n&1 is 1
    // if n is odd, else 0.
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}