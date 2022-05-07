#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int nr = 0;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            if(x)
                nr++;
        }
        if(nr >= 2)
            ans++;
    }
    cout << ans;

    return 0;
}
