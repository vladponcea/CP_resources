#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

typedef long long ll;
typedef long double ld;
 
int n, k;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
       
    cin >> n >> k;

    ll maxi = pow(10, k)-1;
    ll nr = pow(n, n);
    while(nr%maxi != 0) {
        maxi--;
    }
    cout << maxi;

    return 0;
}
