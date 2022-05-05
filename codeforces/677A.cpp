#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

typedef long long ll;
typedef long double ld;
 
int n, h, nr, x;
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x > h) {
            nr += 2;
        } else {
            nr++;
        }
    }

    cout << nr;

    return 0;
}
