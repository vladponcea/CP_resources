#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt, ans = 0;
    cin >> tt;
    while(tt--) {
        int x;
        cin >> x;
        ans = 0;
        for (int i = 0; i < 3; i++){
            int a;
            cin >> a;
            if(a > x)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}