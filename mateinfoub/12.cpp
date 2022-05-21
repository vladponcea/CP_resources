#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int nrdiv(ll x) {
    ll nr = 0;
    for (ll i = 1; i <= x; i++) {
        if(x%i == 0)
            nr++;
    }
    cout << x << ' ' << nr << '\n';
    if(nr == 5) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ans = 0;

    for (ll i = 1; i <= 2000000000; i++) {
        if(nrdiv(i))
            ans++;
    }
    cout << ans;

    return 0;
}
