#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }
    
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;

        if(t == 1) {
            int j, x;
            cin >> j >> x;
            
            v[j-1] = x;

            int s = 0;
            for (int k = 0; k < n; k++) {
                s += v[k];
            }
            cout << s << '\n';
        } else {
            int x;
            cin >> x;
            
            for (int k = 0; k < n; k++) {
                
            }
            
            int s = 0;
            for (int k = 0; k < n; k++) {
                s += v[k];
            }
            cout << s << '\n';
        }
    }

    return 0;
}
