#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int n, a[24][24];

int32_t main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j || i+j == n-1) {
                a[i][j] = -1;
            } else if(i == 0 && j != 0 || j == 0 && i != 0 || i == n-1 && j != n-1 || j == n-1 && i != n-1) {
                a[i][j] = abs(i-j);
            } else {
                a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
