#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int m, n, a[101][101], x = 0;
    cin >> m >> n;
    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            a[i][j] = x*x;
            x += 2;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
