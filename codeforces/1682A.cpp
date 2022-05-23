#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = n/2;
    while(l > 0 && s[l-1] == s[l]) {
        l--;
    }
    int r = n-l-1;
    cout << r-l+1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
