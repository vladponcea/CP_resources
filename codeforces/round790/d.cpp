#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        int maxi = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int ai = i, aj = j, s = 0;
                
                while(ai >= 0 && aj >= 0 && ai < n && aj < m) {
                    s += a[ai][aj];
                    ai--;
                    aj--;
                }
               
                ai = i, aj = j;
                while(ai >= 0 && aj >= 0 && ai < n && aj < m) {
                    s += a[ai][aj];
                    ai++;
                    aj--;
                }

                ai = i, aj = j;
                while(ai >= 0 && aj >= 0 && ai < n && aj < m) {
                    s += a[ai][aj];
                    ai--;
                    aj++;
                }

                ai = i, aj = j;
                while(ai >= 0 && aj >= 0 && ai < n && aj < m) {
                    s += a[ai][aj];
                    ai++;
                    aj++;
                }

                s -= a[i][j]*3;
                ans = max(ans, s);
            }
        }

        cout << ans << '\n';
    }
}
