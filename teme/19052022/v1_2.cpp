#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int m, n, a[21][21];
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n/2; j++) {
            if(a[i][j] != a[i][m-j]) {
                cout << "NU";
                return 0;
            }
        }
    }

    cout << "DA";
    return 0;
}
