#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, ans = 0, a[20][20];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }    
    }

    int maxi = 0;
    for (int i = 0; i < n*n; i++) {
        int nr = 0;
        for (int j = i; j < n-i; j++) {
            for (int k = 0; k < n-i; k++) {
                if(a[j][k] ==)        
            }
        }
    }

    return 0;
}
