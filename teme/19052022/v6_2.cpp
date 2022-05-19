#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, a[20][20];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j == n-1)
                a[i][j] = 0;
            else {
                a[i][j] = n-j;
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
