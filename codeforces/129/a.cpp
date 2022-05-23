#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int solve(int a[], int b[], int n, int m) {
    int x = 0, ok = 0, c = a[0], i = 0, j = 1 ;
    while(i < m && j < n) {
        if(x) {
            if(b[m-1] < c) {
                return 1;
            } else {
                c = b[i++];
            }
            x = 0;
        } else {
            if(a[n-1] < c) {
                return 1;
            } else {
                c = a[j++];
            } 
            x = 1;
        } 
    }
    return 0;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n, m, a[51], b[51];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        
        if(solve(a, b, n, m) == 1)
            cout << "Alice" << '\n';
        else 
            cout << "Bob" << '\n';
        
        if(solve(b,  a, m, n) == 1) 
            cout << "Bob" << '\n';
        else 
            cout << "Alice" << '\n';

    }

    return 0;
}
