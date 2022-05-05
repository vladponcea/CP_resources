#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

typedef long long ll;
typedef long double ld;
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, sum, cnt, ans;
    while(cin >> n) {
        ll a[n];
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        sum /= 2;
        sort(a, a+n);
        cnt = 0;
        ans = 0;
        for (int i = n-1; i >= 0; i--) {
            ans += a[i];
            cnt++;
            if(ans > sum)
                break;
        }
        cout << cnt;
    }

    return 0;
}
