#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i][0] << ' ';
    }

    for (int i = 1; i < n; i++) {
        cout << a[n-1][i] << ' ';
    }

    for (int i = n-2; i >= 0; i--) {
        cout << a[i][n-1] << ' ';
    }

    for (int i = n-2; i >= 1; i--) {
        cout << a[0][i] << ' ';
    }

    return 0;
}
