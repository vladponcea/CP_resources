#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t, n, v[101];

void op(int a[], int n, int ok) {
    ok = 1;
    for (int i = 0; i < n-1; i++) {

    }
}

int main() {
    cin >> t;
    while(t) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ok = 0, ans = 0;
        while(!ok) {
            op(v, n, ok);

            for (int i = 0; i < n; i++) {
                cout << v[i] << ' ';
            }

            cout << '\n';
            ans++;
        }

        cout << ans << '\n';

        t--;
    }


    return 0;
}
