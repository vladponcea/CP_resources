#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, a[100][100];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] == 3 && (a[i-1][j] == 0 || a[i+1][j] == 0 || a[i][j-1] == 0 || a[i][j+1] == 0))
                cout << i+1 << ' ';
        }
    }

    return 0;
}
