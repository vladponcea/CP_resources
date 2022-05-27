#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int m, n, a[20][20];
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int nr = 0;
    for (int i = 0; i < n; i++) {
        int k = 0, ok = 1;
        for (int j = 0; j < m; j++) {
            if(a[j][i] == a[k++][i])
                ok = 0;
        }
        if(ok)
            nr++;
    }

    cout << nr;

    return 0;
}
