#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, k, a[20][20], x = 1;
    cin >> n >> k;
    for (int i = 1; i <= n*k; i++) {
        int aux = x;
        for (int j = 1; j <= n; j++) {
            a[i][j] = aux++;
        }
        if(i%k == 0)
            x++;
    }

    for (int i = 1; i <= n*k; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
