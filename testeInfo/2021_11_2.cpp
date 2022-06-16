#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, k, a[20][20];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == k-1 && j < i) {
                int aux = a[i][j];
                a[i][j] = a[j][k-1];
                a[j][k-1] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
