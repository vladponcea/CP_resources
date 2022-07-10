#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;


void solve() {
    string s;
    cin >> s;
    int ans = 0;
    int v[256];
    for (int i = 0; i < 256; i++) {
        v[i] = 0;
    }
    set<char> set;
    for (int i = 0; i < s.size(); i++) {
        set.insert(s[i]);
    }
    cout << set.size()/3+1 << '\n';
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
