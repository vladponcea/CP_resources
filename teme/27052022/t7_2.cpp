#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int m, n, a[20][20], ok = 0;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][0] == a[j][n-1]) {
                cout << a[i][0] << ' ';
                ok = 1;
            }
        }   
    }
    if(!ok)
        cout << "nepolarizate";

    return 0;
}
