#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k, x, a[21][21], nr;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        x = i;
        nr = 0;
        for (int j = 1; j <= n*k; j++) {
            if(nr < k) {
                nr++;
                a[i][j] = x;
            } else {
                x++;
                nr = 0;
                a[i][j] = x;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n*k; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}
