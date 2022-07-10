#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;


void solve() {
    int n;
    cin >> n;
    if(n < 10) {
        cout << n-1 << '\n';
    } else {
        int ans = 1;
        while(ans <= n) {
            ans *= 10;
        }
        ans /= 10;
        cout << n-ans << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}
