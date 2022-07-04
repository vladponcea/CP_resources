#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ok = 1;
        cin >> n;
        for (int a = 0; a < n && ok; a++) {
            for (int b = 0; b < n && ok; b++) {
                for (int c = 0; c < n && ok; c++) {
                    if((a^b)+(b^c)+(a^c) == n) {
                        cout << a << ' ' << b << ' ' << c << '\n';
                        ok = 0;
                    }
                }
            }
        }
        if(ok)
            cout << -1 << '\n';
    }

    return 0;
}
