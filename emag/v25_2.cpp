#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int a[25][25];

int32_t main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < m-1; j++) {
            if(a[i][j] != 1 && a[i+1][j] != 1 && a[i-1][j] != 1 && a[i][j+1] != 1 && a[i][j-1]  != 1)
                a[i][j] = 1;
            
            if(a[i][j] != 2 && a[i+1][j] != 2 && a[i-1][j] != 2 && a[i][j+1] != 2 && a[i][j-1]  != 2)
                a[i][j] = 2;

            if(a[i][j] != 3 && a[i+1][j] != 3 && a[i-1][j] != 3 && a[i][j+1] != 3 && a[i][j-1]  != 3)
                a[i][j] = 3;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
