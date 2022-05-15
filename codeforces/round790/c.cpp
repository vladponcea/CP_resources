#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int cost(string &a, string &b) {
    int val = 0;
    for (int i = 0; i < a.size(); i++) {
        val += abs(a[i] - b[i]);
    }
    return val;
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> v(n);
        for (string &val : v) {
            cin >> val;
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                ans = min(ans, cost(v[i], v[j]));
            }
        } 

        cout << ans << '\n';
    }
}
