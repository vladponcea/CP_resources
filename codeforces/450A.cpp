#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, m, last;
    double t, max(0);
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (ceil(t / m) >= max) {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << '\n';

    return 0;
}
