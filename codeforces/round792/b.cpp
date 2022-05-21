#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max(a,max(b,c)), ok = 1;
        for (int x = 0; x < maxi && ok; x++) {
            for (int y = 0; y < maxi && ok; y++) {
                for (int z = 0; z < maxi && ok; z++) {
                    if(x%y == a && y%z == b && z%x == c) {
                        cout << x << ' ' << y << ' ' << z << '\n';
                        ok = 0;
                    }
                }
            }
        }
    }

    return 0;
}
