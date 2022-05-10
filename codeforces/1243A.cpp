#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool bi(int b, int c) {
    if(b>c) return 1;
    return 0;
}

int a[1005];

int main() {
    int k;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        sort(a+1, a+n+1, bi);
        int ok = 0;
        for (int i = 1; i <= n; i++) {
            if(a[i] < i) {
                ok = 1;
                cout << i-1 << '\n';
                break;
            }
        }

        if(!ok)
            cout << n << '\n';
    }

    return 0;
}
