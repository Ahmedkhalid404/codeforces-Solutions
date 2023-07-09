#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void) {
    string num;
    cin>>num;
    for(int i=0;i<num.size();i++)
    {
        if(i==0 && num[0] - '0' == 9)
            num[i] = num[i];
        else
        {
            if(num[i] - '0' >= 5)
                num[i] = (9 - (num[i] -'0') ) + '0';
        }
 
    }
    cout<<num;
    return 0;
}
 