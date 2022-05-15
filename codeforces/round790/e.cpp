#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), v(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        
        for (int i = 0; i < n; i++) {
            v[i] = (i ? v[i-1] : 0) + a[i];
        }
        
        for (int i = 0; i < q; i++) {
            ll x;
            cin >> x;
            int st = 1, dr = n, ans = -1;
            while(st <= dr) {
                int mij = (st+dr)/2;
                if(v[mij-1] >= x) {
                    ans = mij;
                    dr = mij - 1;
                } else {
                    st = mij + 1;
                }
            }

            cout << ans << '\n';
        }

    }

    return 0;
}
