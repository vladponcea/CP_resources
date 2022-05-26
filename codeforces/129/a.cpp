#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int m;
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int x = *max_element(a.begin(), a.end());
        int y = *max_element(b.begin(), b.end());
        if(x < y) {
            cout << "Bob" << '\n';
            cout << "Bob" << '\n';
            continue;
        }
        if(x > y) {
            cout << "Alice" << '\n';
            cout << "Alice" << '\n';
            continue;
        }
        cout << "Alice" << '\n';
        cout << "Bob" << '\n';
    }
}
