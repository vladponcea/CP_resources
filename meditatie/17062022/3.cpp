#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int m, n, a[20][20], nr = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][0] == a[j][n-1]) {
                nr++;
                cout << a[i][0] << ' ';
            }
        }
    }


    return 0;
}
