#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            a[i][j-1] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
