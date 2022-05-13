#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int a[25][25];

int32_t main() {
    int n, m;
    cin >> n >> m;

    int k = 1;
    for (int j = 0; j < m; j++) {
        a[0][j] = k;
        k++;
        if(k > 3)
            k = 1;
    }

    for (int i = 1; i < n; i++) {
        k = a[i-1][0] + 1;
        if(k > 3)
            k = 1;
        for (int j = 0; j < m; j++) {
            a[i][j] = k;
            k++;
            if(k > 3)
                k = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
