#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, k, a[21][21];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    int x = a[k][0];
    for (int i = 2; i < k; i++) {
        a[k][i-1] = a[k][i];
    }
    a[k][k-1] = x;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}
