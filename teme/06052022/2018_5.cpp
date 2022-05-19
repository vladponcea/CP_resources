#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int n, a[50][50];

int32_t main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j == n-1 || i+j == n-2 || i+j == n)
                a[i][j] = 1;
            else
                a[i][j] = 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
