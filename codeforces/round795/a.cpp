#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        int x, y, ans = 0;
        cin >> x;
        for (int i = 0; i < n-1; i++) {
            cin >> y;
            if(x%2 == 0 && y%2 != 0) {
                ans++;
            } 
            x = y;
        }
        if((x%2 == 0 && y%2 != 0) || (x%2 != 0 && y%2 == 0))
            ans++;
        cout << ans << '\n';
    }

    return 0;
}
