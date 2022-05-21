#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << (min((k*l)/nl, min(c*d, p/np)))/n;

    return 0;
}
